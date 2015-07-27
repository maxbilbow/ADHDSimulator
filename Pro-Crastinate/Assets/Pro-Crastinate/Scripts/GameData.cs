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
			UpdateScores ();
		}

		void OnApplicationQuit(){
			UpdateScores ();
			lastSessionTime = currentSessionTime;
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



		void UpdateScores() {
			totalTime += Time.deltaTime;
			currentProcrastination += Time.deltaTime;
			currentSessionTime = Time.fixedTime;
			GameController.current.newPersonalBest = currentProcrastination > longestProcrastination;
			if (GameController.current.newPersonalBest) {
				longestProcrastination = currentProcrastination;
			}
		}
	
		public override void OnEventDidStart(System.Enum theEvent, object info) {
		 	if (theEvent.Equals (RMX.Event.ResumeSession)) {

			} else if (theEvent.Equals (RMX.Event.PauseSession))
				lastProcrastination = currentProcrastination;
				UpdateScores ();
		}
		public override void OnEventDidEnd(System.Enum theEvent, object info) {
			if (theEvent.Equals (RMX.Event.PauseSession)) {
				BuildWychd(info is Event ? (Event) info : Event.NULL);
				
			} else if (theEvent.Equals(RMX.Event.ResumeSession)) {
				currentProcrastination = 0;
			}
		}


		private static Wychd DefaultList(float time) {
			Wychd result = new Wychd ();
			float timeInMinutes = time / 60;
			if (timeInMinutes < 0.5) {
				result.Add("approved this app for distribution!");
				result.Add("done very little else.");
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

	 	string _wychd;
		public static string wychd {
			get{
				if (_current._wychd == null) 
					_current.BuildWychd(GameController.current.isPaused ? Event.FirstPause : Event.NULL);
				return _current._wychd;
			}
		}
		public void BuildWychd (Event args = Event.NULL) {
			float time = 0; 
			if (args.Equals(Event.FirstPause)) {
				_wychd = "Congratulations. During your last session, you wasted ";
				time = GameData.lastSessionTime;
			} else {
				_wychd = "Congratulations. You have wasted ";
				time = GameData.lastProcrastination;
			}
			var activities = WhatYouCouldHaveDone (time);
			_wychd += TextFormatter.TimeDescription (time);
			
			if (GameController.current.newPersonalBest) {
				_wychd += "\nA NEW PERSONAL BEST!";
				GameController.current.newPersonalBest = false;
			}
			
			_wychd += "\n\nDuring that time you could have " + activities [Random.Range (0, activities.Count)];
		}


	}



}