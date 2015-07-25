﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Xml;
using RMX;  namespace Procrastinate {




	public class GameData : RMX.Singletons.ASingleton<GameData> {
		/// <summary>
		/// Usually true after the game was turned off and on
		/// </summary>
		/// <value><c>true</c> if new session; otherwise, <c>false</c>.</value>
	



		public float totalTime {
			get {
				return SavedData.Get<float>(UserData.gd_total_time_Wasted);
			} set {
				SavedData.Set(UserData.gd_total_time_Wasted, value);
			}
		}
		
		
		public float currentProcrastination {
			get {
				return SavedData.Get<float>(UserData.gd_current_procrastination);
			} set {
				SavedData.Set(UserData.gd_current_procrastination, value);
			}
		}
		
		public float currentSessionTime {
			get {
				return SavedData.Get<float>(UserData.gd_current_session);
			} set {
				SavedData.Set(UserData.gd_current_session, value);
			}
		}
		
		public float longestProcrastination {
			get {
				return SavedData.Get<float>(UserData.sc_longest_procrastination);
			} set {
				SavedData.Set(UserData.sc_longest_procrastination, value);
			}
		}



		void Update() {
			UpdateScoresAndReset (false);
		}

		void OnApplicationQuit(){
			UpdateScoresAndReset (false);
			PlayerPrefs.Save ();
		}

		public long PercentageOfDevTimeWastedX10000 {
			get {
				return (long) (PercentageOfDevTimeWasted * 10000);
			}
		}

		public double PercentageOfDevTimeWasted {
			get {
				return GameData.current.totalTime / Settings.current.TotalDevTimeWasted;
			}
		}



		void UpdateScoresAndReset(bool reset) {
			totalTime += Time.deltaTime;
			currentProcrastination += Time.deltaTime;
			currentSessionTime = Time.fixedTime;
			Settings.current.newPersonalBest = currentProcrastination > longestProcrastination;
			if (Settings.current.newPersonalBest) {
				longestProcrastination = currentProcrastination;
			}
			if (reset) {
				currentProcrastination = 0;
			}
		}
	
		public override void OnEventDidStart(IEvent theEvent, object info) {
		 	if (theEvent.IsType (Events.ResumeSession))
				UpdateScoresAndReset (true);
			else if (theEvent.IsType (Events.PauseSession))
				UpdateScoresAndReset (false);
		}

		/*
		public static UserData GetEnum(string key) {
			switch (key) {
			case Key.LastSession:
				return UserData.CurrentSession;
			case Key.LastProcrastination:
				return UserData.CurrentProcrastination;
			case Key.Total:
				return UserData.Total;
			default:
				throw new System.ArgumentNullException("Key was not recognised in GameData.GetEnum(string key)");
			} 

		}
*/
		public void TestData ()
		{
			float[] testTimes = { 10f, 20f, 30f, 45f, 60f, 120f, 3000f, 6000f, 80000f };
			foreach (float time in testTimes) {
				Debug.Log("\n\n--------- Testing: " + time + "---------");
				var list = DataReader.current.GetActivityList (time);
				foreach (string thing in list) {
					Debug.Log (thing);
				}
			}
			
		}

		public Wychd WhatYouCouldHaveDone(float time) {
			Wychd result = DataReader.current.GetActivityList (time);
			var log = "";
			log += "List accessed with time: " + time + ", and " + result.Count + " sentences.";
			if (result.Count > 0) {
				log += "\n - Adding from database...";
			} else {
				log += "\n - Found none in Database...";
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
			}
			if (Settings.ShouldDebug(Tests.GameDataLists)) {
				foreach (string s in result) {
					log += "\n => " + s;
				}
				if (Bugger.WillLog(Tests.GameDataLists,log))
					Debug.Log(Bugger.Last);
			}
			return result;
		}


	}



}