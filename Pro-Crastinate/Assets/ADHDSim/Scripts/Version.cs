using UnityEngine;
using System.Collections;

namespace RMX {
	public class Version {
	
		public const int v0_3_3 = 1;

		public const string Key = "current_version";

		public static int current {
			get {
				return v0_3_3;
			}
		}

		public static void Patch() {
			if (needsPatch) 
				Debug.Log ("PATCH!!!!!");
			else 
				Debug.Log ("Does not need patch");
		}
		public static bool needsPatch = PlayerPrefs.GetInt(Version.Key) < Version.current;
	}
}