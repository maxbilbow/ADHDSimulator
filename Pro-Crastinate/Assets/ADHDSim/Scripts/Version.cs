using UnityEngine;
using System.Collections;

namespace RMX {
	public class Version {
	
		public const float v0_3_4 = 3.04f;

		public const string Key = "current_version";

		public static float current {
			get {
				return v0_3_4;
			}
		}

		public static void Patch() {
			if (needsPatch) {
				Debug.Log ("PATCH!!!!!");
				try {
					Patchv0_3_3();
					PlayerPrefs.SetFloat(Version.Key, current);
				} catch (UnityException e){
					needsPatch = true;
					Debug.Log(e);
				}
			} else if (Bugger.WillTest(Testing.Misc))
				Debug.Log ("Does not need patch: v" + PlayerPrefs.GetInt(Version.Key));
		}

		public static bool needsPatch = PlayerPrefs.GetInt(Version.Key) < Version.current;
	
		enum Type {
			Float, Int, String
		}

		private static void Setf(UserData key) {
			var patch = PlayerPrefs.GetInt (Version.Key);
			Set (key, Type.Float, patch);
		}
		private static void Set(UserData key, Type type, int patch) {
			object value = null;// = PlayerPrefs.GetFloat
			var oldKey = OldKey (key);
			var newKey = SavedData.GetKey (key);
			switch (type) {
			case Type.Float:
				value = PlayerPrefs.GetFloat(oldKey);
				break;
			case Type.Int:
				value = PlayerPrefs.GetInt(oldKey);
				break;
			case Type.String:
				value = PlayerPrefs.GetString(oldKey);
				break;
			default:
				throw new UnityException(oldKey + " could not be updated");
			}
			Debug.Log (oldKey + " Is Being Updated to " + newKey);
			PlayerPrefs.SetString (newKey, value.ToString());
			PlayerPrefs.DeleteKey (oldKey);

		}



		private static void Patchv0_3_3() {
			needsPatch = false;
			Setf (UserData.CurrentSession);
			Setf (UserData.CurrentProcrastination);
		

		}
	
		private static string OldKey(UserData data) {
			float version = PlayerPrefs.GetInt (Version.Key);
			if (version < current) {
				switch (data) {
				case UserData.CurrentSession:
					return "last session";
				case UserData.CurrentProcrastination:
					return "last uninterupted";
				case UserData.TotalTime:
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
			}
			return null;
		}
	}
}
