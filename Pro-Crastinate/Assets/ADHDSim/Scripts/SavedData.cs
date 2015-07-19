using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SocialPlatforms;

namespace RMX {

	public enum UserData {
		// Saved Game Data
		CurrentSession, CurrentProcrastination, TotalTime,
		// Saved & Top Scores
		LongestProctrastination,
		// Top Scores
		OfDevTime, 

		// Achievements
		AmeteurCrastinator, TimeWaster, Apathetic, SemiPro, Pro, MakingTime, OverTime,

		// Other System and Game Data
		Version, NotFirstTime
	}


	public class SavedData {

		private string key;
		public SavedData(UserData key) {
			Version.Patch();
			this.key = GetKey(key);
		}

		public string value;

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
				int result;
				return int.TryParse(PlayerPrefs.GetString(key), out result) ? result : -1;
			}
			set {
				PlayerPrefs.SetString(key,value.ToString());
			}
		}

		public float Float {
			get {
				float result;
				return float.TryParse(PlayerPrefs.GetString(key), out result) ? result : -1;
			} set {
				PlayerPrefs.SetString(key,value.ToString());
			}
		}

		public override string ToString() {
			return this.value;
		}
		
		/// <summary>
		/// Gets the String Key used to get and set PlayerPrefs. This is NOT the same as the ID used by GameKit
		/// </summary>
		/// <returns>The key.</returns>
		/// <param name="data">Data.</param>
		public static string GetKey(UserData data) {
			switch (data) {
			// Saved Game Data
			case UserData.CurrentSession:
				return "gd_current_session";
			case UserData.CurrentProcrastination:
				return "gd_current_procrastination";
			case UserData.TotalTime:
				return "gd_total_time_Wasted";
			case UserData.LongestProctrastination:
				return "sc_longest_procrastination";

			// Top Scores
			case UserData.OfDevTime:
				return "sc_total_as_percent_of_dev";

			// Achievements
			case UserData.AmeteurCrastinator:
				return "ach_ameteur_crastinator";
			case UserData.TimeWaster:
				return "ach_time_waster";
			case UserData.OverTime:
				return "ach_overtime";
			case UserData.SemiPro:
				return "ach_semi_pro";
			case UserData.Apathetic:
				return "ach_apathetic";
			case UserData.Pro:
				return "ach_pro_crastinator";

			// Other System and Game Data
			case UserData.NotFirstTime:
				return "gd_has_played_before";
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
