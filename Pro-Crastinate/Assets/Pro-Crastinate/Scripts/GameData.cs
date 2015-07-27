using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Xml;
using RMX;  

namespace Procrastinate {
	public class GameData : RMX.Singletons.ASingleton<GameData> {
		/// <summary>
		/// Usually true after the game was turned off and on
		/// </summary>
		/// <value><c>true</c> if new session; otherwise, <c>false</c>.</value>
	

		static float totalTime {
			get {
				return SavedData.Get<float>(UserData.gd_total_time_Wasted);
			} set {
				SavedData.Set(UserData.gd_total_time_Wasted, value);
			}
		}
		
		
		static float currentProcrastination {
			get {
				return SavedData.Get<float>(UserData.gd_current_procrastination);
			} set {
				SavedData.Set(UserData.gd_current_procrastination, value);
			}
		}

		public static float lastProcrastination {
			get {
				return SavedData.Get<float>(UserData.gd_last_procrastination);
			} set {
				SavedData.Set(UserData.gd_last_procrastination, value);
			}
		}
		 static float currentSessionTime {
			get {
				return SavedData.Get<float>(UserData.gd_current_session);
			} set {
				SavedData.Set(UserData.gd_current_session, value);
			}
		}

		public static float lastSessionTime {
			get {
				return SavedData.Get<float>(UserData.gd_last_session);
			} set {
				SavedData.Set(UserData.gd_last_session, value);
			}
		}

		public static float longestProcrastination {
			get {
				return SavedData.Get<float>(UserData.sc_longest_procrastination);
			} set {
				SavedData.Set(UserData.sc_longest_procrastination, value);
			}
		}



		void Update() {
			UpdateScoresAndReset (false, false);
		}

		void OnApplicationQuit(){
			UpdateScoresAndReset (true, true);
			PlayerPrefs.Save ();
		}

		public static long PercentageOfDevTimeWastedX10000 {
			get {
				return (long) (PercentageOfDevTimeWasted * 10000);
			}
		}

		public static double PercentageOfDevTimeWasted {
			get {
				return totalTime / GameController.current.TotalDevTimeWasted;
			}
		}



		void UpdateScoresAndReset(bool reset, bool final) {
			totalTime += Time.deltaTime;
			currentProcrastination += Time.deltaTime;
			currentSessionTime = Time.fixedTime;
			GameController.current.newPersonalBest = currentProcrastination > longestProcrastination;
			if (GameController.current.newPersonalBest) {
				longestProcrastination = currentProcrastination;
			}
			if (reset) {
				lastProcrastination = currentProcrastination;
				currentProcrastination = 0;
			}
			if (final) {
				lastSessionTime = currentSessionTime;
			}
		}
	
		public override void OnEventDidStart(System.Enum theEvent, object info) {
		 	if (theEvent.Equals (RMX.Event.ResumeSession))
				UpdateScoresAndReset (true, false);
			else if (theEvent.Equals (RMX.Event.PauseSession))
				UpdateScoresAndReset (true, false);
		}

	
		public static void TestData ()
		{
			float[] testTimes = { 10f, 20f, 30f, 45f, 60f, 120f, 3000f, 6000f, 80000f };
			foreach (float time in testTimes) {
				Debug.Log("\n\n--------- Testing: " + time + "---------");
				var list = DataReader.GetActivityList (time);
				foreach (string thing in list) {
					Debug.Log (thing);
				}
			}
			
		}

		private static Wychd DefaultList(float time) {
			Wychd result = new Wychd ();
			float timeInMinutes = time / 60;
			if (timeInMinutes < 0.5) {
				result.Add("approved this app for distribution through the app store!");
				result.Add("done very little else. And I'm glad you did not");
			} else if (timeInMinutes < 1) {
				result.Add("trolled someone on Twitter");
			} else if (timeInMinutes < 1.5) {
				result.Add ("briefly checked for new emails");
			} else if (timeInMinutes < 2) {
				result.Add ("re-heated that cold cup of coffee using the microvave.");
			} else if (timeInMinutes < 4) {
				result.Add ("soft-boiled an egg.");
			} else if (timeInMinutes < 10) {
				result.Add ("hard boilded an egg.");
			} else if (timeInMinutes < 12) {
				result.Add ("had a short bath");
			} else {
				result.Add ("had a good hard think about the meaning of it all.");
				result.Add ("taken a good long look at yourself.");
				result.Add ("learned a new Spanish phrase on Duolingo");
				result.Add ("helped a blind person to see with \"Be My Eyes\"");
			}
			return result;
		}

		public static Wychd WhatYouCouldHaveDone(float time) {
			var log = "Database... ";
			Wychd result = null;
			try {
				result = DataReader.GetActivityList (time);
				log += "\nList accessed with time: " + time + ", and " + result.Count + " sentences.";
				if (result.Count > 0) {
					log += "\n - Adding from database...";
				} else {
					throw new UnityException("\nFAIL: Database was Empty!");
				}
			} catch (System.Exception e) {
				log += "\n" + e.Message + "\n reverting to default";
				result = DefaultList(time);
			} finally {
				if (GameController.ShouldDebug (Tests.GameDataLists) || GameController.ShouldDebug (RMXTests.Database)) {
					foreach (string s in result) {
						log += "\n => " + s;
					}

				}
			}
			if (Bugger.WillLog (Tests.GameDataLists, log) || Bugger.WillLog (RMXTests.Database, log))
				Debug.Log (Bugger.Last);
			return result;
		}


	}



}