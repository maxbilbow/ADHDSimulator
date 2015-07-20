﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using UnityEngine.SocialPlatforms;
using UnityEngine.SocialPlatforms.GameCenter;
using System.Runtime.InteropServices;
#if !UNITY_IOS && !UNITY_STANDALONE_OSX
using GooglePlayGames;
#endif

//[DllImport("__Internal")]
//private static extern void _ReportAchievement( string achievementID, float progress );

namespace RMX {
	public class GameCenter : ASingleton<GameCenter> {


		void Start() {
			GameCenterPlatform.ShowDefaultAchievementCompletionBanner (true);
			Authenticate ();
			CheckProgress ();
			settings.willPauseOnLoad = SavedData.Get(UserData.CurrentSession).Float > 0;
			gameController.PauseGame (settings.willPauseOnLoad);
		}

		public void Authenticate() {
			if (!Social.localUser.authenticated) {
				var userInfo = Bugger.StartLog (Testing.GameCenter);
				Social.localUser.Authenticate (success => {
					if (success) {
						userInfo.message += "Authentication successful\n";
						userInfo.message += "Username: " + Social.localUser.userName + 
							"\nUser ID: " + Social.localUser.id + 
							"\nIsUnderage: " + Social.localUser.underage;
					} else
						userInfo.message += "\nAuthentication failed";
				});

				if (userInfo.isActive)
					Debug.Log (userInfo);
			}
		}

		public bool HasAchieved(UserData key) {
			try {
				return SavedData.Get (key).Bool;
			} catch (Exception e) {
				SavedData.Get (key).Bool = false;
				var log = Bugger.StartLog(Testing.Exceptions, "HasAchieved(" + key + ") threw an error!\n" + e.Message);
				if (log.isActive)
				    Debug.Log(log);
				return false;
			}
		}

		public void ReportScore (long score, UserData data) {
			if (Social.localUser.authenticated) {
				string leaderboardID = GetID (data);
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
		}

		private UserData[] timeBasedAchievements = {
			UserData.AmeteurCrastinator, 
			UserData.Apathetic, UserData.SemiPro, UserData.Pro 
		};

		public void CheckProgress() {
			var time = SavedData.Get (UserData.TotalTime).Float;
			foreach (UserData key in timeBasedAchievements) {
//				if (!SavedData.Get(key).Bool)
					SavedData.Get(key).Bool = UpdateAchievement (key, time);
			}
		}


		public double CheckProgress(UserData key) {
			var totalTime = SavedData.Get(UserData.TotalTime).Double;
			double result = 0;
			switch (key) {
			case UserData.AmeteurCrastinator:
				result = totalTime > 20 ? 100 : 0;
				break;
			case UserData.TimeWaster:
				result = totalTime / (10 * 60);
				break;
			case UserData.SemiPro:
				result = totalTime / (settings.TotalDevTimeWasted / 4);
				break;
			case UserData.Apathetic:
				result = totalTime / (settings.TotalDevTimeWasted / 2);
				break;
			case UserData.Pro:
				result = totalTime / settings.TotalDevTimeWasted ;//gameData.PercentageOfDevTimeWasted;

				break;
			case UserData.MakingTime:
			case UserData.BigTime:
			case UserData.OverTime:
				result = 1;
				break;
			default:
				return 0;
			}
			if (result >= 1) {
				result = 1;
				SavedData.Get (key).Bool = true;
			} else {
				SavedData.Get (key).Bool = false;
			}
//			Debug.LogWarning(string.Format("{0:N2}: " + key.ToString(),result));
			return result;

		}


		public bool UpdateAchievement(UserData data, float score) {
			bool completed = false;
			string achievementID = GetID (data);
			double progress = CheckProgress(data) * 100;

			var log = Bugger.StartLog(Testing.Achievements, data.ToString());
			if (Social.localUser.authenticated) { //TODO: Check this works
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
							throw new System.ArgumentException ("No achievements returned");
						}
					});
				} catch (System.ArgumentException exception) {
					log.message += exception.Message;
					log.feature = Testing.Exceptions;
					if (log.isActive)
						Debug.Log (log);
					log.feature = Testing.Achievements;
				}
			}
			if (completed) {
				log.message += "\nAlready Completed!";
				return true;
			} else if (Social.localUser.authenticated) {
				log.message += "\n" + data + ": ";



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
				} catch (Exception e){
					if (log.isActive) 
						Debug.Log(log);
					log.feature = Testing.Exceptions;
					log.message += e.Message;
					if (log.isActive) 
						Debug.Log(log);
					log.feature = Testing.Achievements;
				}
					#else
				try {
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
				} catch (Exception e){
					if (log.isActive) 
						Debug.Log(log);
					log.feature = Testing.Exceptions;
					log.message += e.Message;
					if (log.isActive) 
						Debug.Log(log);
					log.feature = Testing.Achievements;
				}
					#endif
				log.message += "\n New status isCompleted: " + completed;

			}
			if (log.isActive)
				Debug.Log(log);
			
			return completed;
		}

		public string GetID(UserData key) {
			#if UNITY_IOS || UNITY_STANDALONE_OSX
			string id = "grp.";
			#else
			string id = "";
			#endif
			switch (key) {
			// Leadership Boards
			case UserData.LongestProctrastination:
				id += "CgkI2PKS_coeEAIQAw";//"55415446";
				break;
			case UserData.PercentageOfDevTime:
				id += "CgkI2PKS_coeEAIQCA";//"55415445";
				break;
			// Time Based Achievements
			case UserData.AmeteurCrastinator:
				id += "CgkI2PKS_coeEAIQAQ";
				break;
			case UserData.TimeWaster:
				id += "CgkI2PKS_coeEAIQBA";
				break;
			case UserData.Apathetic:
				id += "CgkI2PKS_coeEAIQBw";
				break;
			case UserData.SemiPro:
				id += "CgkI2PKS_coeEAIQBQ";
				break;
			case UserData.Pro:
				id += "CgkI2PKS_coeEAIQBg";
				break;
			// Event Based Achievements
			case UserData.MakingTime:
				id += "CgkI2PKS_coeEAIQCQ";
				break;
			case UserData.BigTime:
				id += "CgkI2PKS_coeEAIQDA";
				break;
			case UserData.OverTime:
				id += "CgkI2PKS_coeEAIQDQ";
				break;
			}
			return id;
		}


	}
}