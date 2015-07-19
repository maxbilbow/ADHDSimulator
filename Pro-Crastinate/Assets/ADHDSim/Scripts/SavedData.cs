using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SocialPlatforms;

namespace RMX {

	public enum UserData {
		CurrentSession, CurrentProcrastination, TotalTime,
		LongestProctrastination, OfDevTime, 
		AmeteurCrastinator, TimeWaster, Apathetic, SemiPro, Pro,
		MakingTime,
		Version, NotFirstTime
	}


	public class SavedData {


		private string key;
		public SavedData(UserData key) {
			Version.Patch();
			this.key = GetKey(key);
		}

		public long Long {
			get {
				long result;
				return long.TryParse (PlayerPrefs.GetString (key), out result) ? result : -1;
			} set {
				PlayerPrefs.SetString(key, value.ToString());
			}
		}

		public bool Bool {
			get {
				bool result;
				return bool.TryParse (PlayerPrefs.GetString (key), out result) ? result : false;
			} set {
				PlayerPrefs.SetString(key, value.ToString());
			}
		}

		public int Int {
			get {
				//int result;
				//return int.TryParse(PlayerPrefs.GetString(key), out result) ? result : -1;
				return PlayerPrefs.GetInt(key);
			}
			set {
				PlayerPrefs.SetInt(key,value);
			}
		}

		public float Float {
			get {
				return PlayerPrefs.GetFloat(key);
			} set {
				PlayerPrefs.SetFloat(key,value);
			}
		}
		
		/// <summary>
		/// Gets the String Key used to get and set PlayerPrefs. This is NOT the same as the ID used by GameKit
		/// </summary>
		/// <returns>The key.</returns>
		/// <param name="data">Data.</param>
		private static string GetKey(UserData data) {
			switch (data) {
			case UserData.CurrentSession:
				return "last_session";
			case UserData.CurrentProcrastination:
				return "last_uninterupted";
			case UserData.TotalTime:
				return "Total_Time_Wasted";
			case UserData.LongestProctrastination:
				return "longest_Procrastination";
			case UserData.AmeteurCrastinator:
				return "AmeteurCrastinator";
			case UserData.TimeWaster:
				return "Time_Waster";
			case UserData.SemiPro:
				return "Semi_Pro";
			case UserData.Apathetic:
				return "Apathetic";
			case UserData.Pro:
				return "Pro_Crastinator";
			case UserData.NotFirstTime:
				return "Has_Played_Before";
			case UserData.Version:
				return Version.Key;
			}
			throw new System.Exception("No Key! " + data.ToString());
//			return null;
		}

		private static Dictionary<UserData, SavedData> _data = new Dictionary<UserData, SavedData>() {
			{ UserData.NotFirstTime, new SavedData(UserData.NotFirstTime) } 
		};

		public static SavedData Get(UserData key) {
			if (!_data.ContainsKey (key)) {
				_data[key] = new SavedData(key);
			}
			return _data[key];
		}
	}
}
