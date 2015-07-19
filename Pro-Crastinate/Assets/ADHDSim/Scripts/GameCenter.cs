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

		public Dictionary<UserData, bool> _achievements = new Dictionary<UserData, bool> ();
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
					if (Bugger.WillTest(Testing.GameCenter)) Debug.Log ("Authentication successful");
					userInfo.log = "Username: " + Social.localUser.userName + 
						"\nUser ID: " + Social.localUser.id + 
							"\nIsUnderage: " + Social.localUser.underage;
					if (Bugger.WillTest(Testing.GameCenter)) Debug.Log(userInfo);
				}
				else
					if (Bugger.WillTest(Testing.GameCenter)) Debug.Log ("Authentication failed");
			});
		}

		public bool HasAchieved(UserData key) {
			try {
				return _achievements [key];
			} catch {
				if (Bugger.WillTest(Testing.Achievements)) Debug.Log("HasAchieved() threw an error!");
				return false;
			}
		}

		public void ReportScore (long score, UserData data) {
			string leaderboardID = GameData.current.GetID (data);
			var log = Bugger.StartLog (Testing.GameCenter);
			log.log += "Reporting score " + score + " on leaderboard " + leaderboardID + "\n";
			try {
				Social.ReportScore (score, leaderboardID, success => {
					log.log += success ? "Reported score successfully" : "Failed to report score";	
				});
			} catch (System.Exception e) {
				if ( Bugger.WillTest(Testing.Exceptions) )
					UnityEngine.Debug.Log(e);//, Testing.Exceptions);
			} finally {
				if (Bugger.WillTest(Testing.GameCenter))
					Debug.Log(log);
			}
		}

		public void CheckProgress() {
			var time = SavedData.Get (UserData.TotalTime).Float;

			foreach (KeyValuePair<UserData, bool> entry in _achievements) {
				if (entry.Value == false)
					_achievements[entry.Key] = UpdateAchievement (entry.Key, time);
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

		public bool UpdateAchievement(UserData data, float score) {
			bool completed = false;
			string achievementID = GameData.current.GetID (data);
			try {
				Social.LoadAchievements (achievements => {
					if (achievements.Length > 0) {
	//					Debug.Log ("Got " + achievements.Length + " achievement instances");
	//					string myAchievements = "My achievements:\n";
						foreach (IAchievement achievement in achievements) {
							if (achievement.id == achievementID) {
								completed = achievement.completed || achievement.percentCompleted == 100;
								Debug.Log ("Achievement " + achievement.id + ", progresss: " + achievement.percentCompleted + ", complete: " + achievement.completed);
								break;
							}
						}
	//					Debug.Log (myAchievements);
					} else {
	//					Debug.Log ("No achievements returned");
						throw new System.ArgumentException("No achievements returned");
					}
				});
			} catch (System.ArgumentException exception) {
				Debug.Log (exception.Message);
				return false;
			}
			if (completed) {
				return true;
			} else {
				double progress;
				float totalTime = SavedData.Get(UserData.TotalTime).Float;
				switch (data) {
				case UserData.AmeteurCrastinator:
					progress = totalTime > 20 ? 100 : 0;
					break;
				case UserData.TimeWaster:
					progress = totalTime / (10 * 60);
					break;
				case UserData.SemiPro:
					progress = totalTime / (GameData.current.devTimeWasted / 4);
					break;
				case UserData.Apathetic:
					progress = totalTime / (GameData.current.devTimeWasted / 2);
					break;
				case UserData.Pro:
					progress = totalTime / GameData.current.devTimeWasted;
					break;
				case UserData.MakingTime:
					progress = 1;
					break;
				default:
					return false;
				}
				progress *= 100;
				#if UNITY_IOS || UNITY_STANDALONE_OSX
				if (progress >= 100) {
					progress = 100;
					completed = true;
				} else {
					progress = 0;
					completed = false;
				}
				GKAchievementReporter.ReportAchievement(achievementID, (float) progress, true);
						
				#else
				Social.ReportProgress (achievementID, progress, result => {
					Debug.Log (GameData.GetKey(data) + ": " + progress + ", result: " + result);
					if (result) {
						completed = true;
						Debug.Log("Achievement Success");

					} else {
						completed = false;
						Debug.Log("Achievement Failed to report");
					}
				});
				#endif

				if (completed) {

				}
				return completed;
			}

		}

	}
}