using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.GameCenter;
using System.Runtime.InteropServices;

//[DllImport("__Internal")]
//private static extern void _ReportAchievement( string achievementID, float progress );

namespace RMX {
	public class GameCenter : ASingleton<GameCenter> {

//		private static bool _willUpdateAwards = false;
//		public static void AnAwardWasAchieved() {
//			_willUpdateAwards = true
//		}

		public Dictionary<UserData, bool> achievements = new Dictionary<UserData, bool> ();
//		[DllImport("__Internal")]
//		private static extern void _ReportAchievement( string achievementID, float progress );

		protected override void Awake() {
			base.Awake ();
			Authenticate ();
			CheckProgress ();
		}

		void Authenticate() {
			var userInfo = Bugger.StartLog (Testing.GameCenter);
			GameCenterPlatform.ShowDefaultAchievementCompletionBanner(true);
			Social.localUser.Authenticate (success => {
				if (success) {
					userInfo.message += "Authentication successful\n";
					userInfo.message += "Username: " + Social.localUser.userName + 
						"\nUser ID: " + Social.localUser.id + 
							"\nIsUnderage: " + Social.localUser.underage;
				}
				else
					userInfo.message += "\nAuthentication failed";
			});
			if (userInfo.isActive)
				Debug.Log(userInfo);
		}

		public bool HasAchieved(UserData key) {
			try {
				return achievements [key];
			} catch (Exception e) {
				achievements[key] = false;
				var log = Bugger.StartLog(Testing.Exceptions, "HasAchieved(" + key + ") threw an error!\n" + e.Message);
				if (log.isActive)
				    Debug.Log(log);
				return false;
			}
		}

		public void ReportScore (long score, UserData data) {
			string leaderboardID = GameData.current.GetID (data);
			var log = Bugger.StartLog (Testing.GameCenter);
			log.message += "Reporting score " + score + " on leaderboard " + leaderboardID + "\n";
			try {
				Social.ReportScore (score, leaderboardID, success => {
					log.message += success ? "Reported score successfully" : "Failed to report score";	
				});
			} catch (System.Exception e) {
				log.message += e;
				log.feature = Testing.Exceptions;
			} finally {
				if (log.isActive)
					Debug.Log(log);
			}
		}

		public void CheckProgress() {
			var time = SavedData.Get (UserData.TotalTime).Float;

			foreach (KeyValuePair<UserData, bool> entry in achievements) {
				if (entry.Value == false)
					achievements[entry.Key] = UpdateAchievement (entry.Key, time);
			}
//			if (!achievement[UserData.AmeteurCrastinator]) 
//				achievement[UserData.AmeteurCrastinator] = UpdateAchievement (UserData.AmeteurCrastinator, time);
//			if (!achievement[UserData.TimeWaster]) 
//				achievement[UserData.TimeWaster] 			= UpdateAchievement (UserData.TimeWaster, time);
//			if (!achievement[UserData.SemiPro]) 
//				achievement[UserData.SemiPro] 				= UpdateAchievement (UserData.SemiPro, time);
//			if (!achievement[UserData.Apathetic]) 
//				achievement[UserData.Apathetic] 			= UpdateAchievement (UserData.Apathetic, time);
//			if (!achievement[UserData.Pro]) 
//				achievement[UserData.Pro] 					= UpdateAchievement (UserData.Pro, time);
		}


		public double CheckProgress(UserData key) {
			var totalTime = SavedData.Get(UserData.TotalTime).Double;
			switch (key) {
			case UserData.AmeteurCrastinator:
				return totalTime > 20 ? 100 : 0;
			case UserData.TimeWaster:
				return totalTime / (10 * 60);
			case UserData.SemiPro:
				return totalTime / (GameData.current.devTimeWasted / 4);
			case UserData.Apathetic:
				return totalTime / (GameData.current.devTimeWasted / 2);
			case UserData.Pro:
				return totalTime / GameData.current.devTimeWasted;
			case UserData.MakingTime:
			case UserData.OverTime:
				achievements[key] = true;
				return 1;
			default:
				return 0;
			}
		}


		public bool UpdateAchievement(UserData data, float score) {
			bool completed = false;
			string achievementID = GameData.current.GetID (data);
			var log = Bugger.StartLog(Testing.Achievements, data.ToString());
			try {
				Social.LoadAchievements (achievements => {
					if (achievements.Length > 0) {
						log.message += "Got " + achievements.Length + " achievement instances:\n";
						foreach (IAchievement achievement in achievements) {
							if (achievement.id == achievementID) {
								completed = achievement.completed || achievement.percentCompleted == 100;
								log.message += "Achievement " + achievement.id + ", progresss: " + achievement.percentCompleted + ", complete: " + achievement.completed + "\n";
								break;
							}
						}
					} else {
						if (log.isActive) 
							Debug.Log (log);
						throw new System.ArgumentException("No achievements returned");
					}
				});
			} catch (System.ArgumentException exception) {
				log.message += exception.Message;
				log.feature = Testing.Exceptions;
				Debug.Log(log);
				return false;
			}

			if (completed) {
				log.message += "\nAlready Completed!";
				return true;
			} else {
				log.message += "\n" + data + ": ";
				double progress = CheckProgress(data) * 100;
			
				log.message += ", Progress: " + (int) progress + "%";
				#if UNITY_IOS || UNITY_STANDALONE_OSX
				if (progress >= 100) {
					progress = 100;
					completed = true;
				} else {
					progress = 0;
					completed = false;
				}
				try {
					GKAchievementReporter.ReportAchievement(achievementID, (float) progress, true);
					log.message += "\n => SUCCESS";
				} catch (Exception e) {
					log.message += " FAILED\n" + e.Message;
				}
						
				#else
				Social.ReportProgress (achievementID, progress, result => {
					log.message += ", result: " + result;
					if (result) {
						completed = true;
						log.message += "\n => SUCCESS";
					} else {
						completed = false;
						log.message += "\n => Achievement Failed to report";
					}
				});
				#endif
				log.message += "\n New status isCompleted: " + completed;
				Debug.Log(log);
				if (completed) {

				}
				return completed;
			}

		}

	}
}