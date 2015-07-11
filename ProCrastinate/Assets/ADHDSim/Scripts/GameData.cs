using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System.Xml;
namespace RMX {
	public enum UserData {
		CurrentSession, CurrentProcrastination, Total, 
		LongestProctrastination, OfDevTime, 
		AmeteurCrastinator, TimeWaster, Apathetic, SemiPro, Pro
	}




	public class GameData  {


		public static float totalTime {
			get {
				return PlayerPrefs.GetFloat(GameData.GetKey(UserData.Total));
			}
		}
		
		
		public static float currentProcrastination {
			get {
				return PlayerPrefs.GetFloat(GameData.GetKey(UserData.CurrentProcrastination));
			}
		}
		
		public static float currentSessionTime {
			get {
				return PlayerPrefs.GetFloat(GameData.GetKey(UserData.CurrentSession));
			}
		}
		
		public static float longestProcrastination {
			get {
				return PlayerPrefs.GetFloat(GameData.GetKey(UserData.LongestProctrastination));
			}
		}
		public static bool newPersonalBest = false;
//		public static Social.D
//		public static GameData data;

//		void Awake() {
//			if (control == null) {
//				DontDestroyOnLoad (gameObject);
//				control = this;
//			} else if (control != this) {
//				Destroy (gameObject);
//			}
//		}

		public const float devTimeWasted = 3 * 60 * 60;
		public static string GetKey(UserData data) {
			switch (data) {
			case UserData.CurrentSession:
				return "last session";
			case UserData.CurrentProcrastination:
				return "last uninterupted";
			case UserData.Total:
				return "Total Time Wasted";
			case UserData.LongestProctrastination:
				return "longestProcrastination";
			case UserData.AmeteurCrastinator:
				return "Ameteur Crastinator";
			case UserData.TimeWaster:
				return "Time Waster";
			case UserData.SemiPro:
				return "Semi-Pro";
			case UserData.Apathetic:
				return "Apathetic";
			case UserData.Pro:
				return "Pro-Crastinator";
			}
			return null;
		}

		public static long GetLong(UserData data) {
			switch (data) {
			case UserData.CurrentSession:
				return (long) GameData.currentSessionTime;
			case UserData.CurrentProcrastination:
				return (long) currentProcrastination;
			case UserData.Total:
				return (long) totalTime;
			case UserData.OfDevTime:
				return (long) (10000 * GameData.totalTime / devTimeWasted);
			}
			return -1;
		}



		public static string GetID(UserData key) {
			switch (key) {
			case UserData.LongestProctrastination:
				return "CgkI2PKS_coeEAIQAw";//"55415446";
			case UserData.OfDevTime:
			case UserData.Total:
				return "CgkI2PKS_coeEAIQCA";//"55415445";
			case UserData.AmeteurCrastinator:
				return "CgkI2PKS_coeEAIQAQ";
			case UserData.TimeWaster:
				return "CgkI2PKS_coeEAIQBA";
			case UserData.Apathetic:
				return "CgkI2PKS_coeEAIQBw";
			case UserData.SemiPro:
				return "CgkI2PKS_coeEAIQBQ";
			case UserData.Pro:
				return "CgkI2PKS_coeEAIQBg";
			}
			return "-1";
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


		public static void LoadGameData () {
//			var fileData : String  = System.IO.File.ReadAllText(path)
//				var lines : String[] = fileData.Split("\n"[0]);
//			var lineData : String[] = (lines[0].Trim()).Split(","[0]);
//			var x : float;
//			float.TryParse(lineData[0], x);
		}

		public static List<string> WhatYouCouldHaveDone(float time) {
			float timeInMinutes = time / 60;
			List<string> result = new List<string> ();
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
	}

}