using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

using RMX;  namespace Procrastinate {
	public class DebugHUD : Bugger.DebugHUD {

		
		string GetTime(object key) {
			var time = SavedData.Get<float> (key);
			var timeString = time > 0 ? TextFormatter.TimeDescription (time) : time.ToString ();
			return "\n – " + key.ToString () + ": <color=yellow>" + timeString + "</color>";
		}

		void Start() {
			Show ();
		}

		protected override string DebugData {
			get {
				string info = "DEBUG =>";
				foreach (UserData key in System.Enum.GetValues(typeof(UserData))) {
					if (key.ToString().StartsWith("ach_"))
						info += "\n – " + key.ToString () + ": " + SavedData.Get<bool>(key).ToString();
					else if (key.ToString().StartsWith("gd_")) {
						info += "\n – " + key.ToString () + ": <color=yellow>" + TextFormatter.TimeDescription(SavedData.Get<float>(key)) + "</color>";
					}
				}
//				info += GetTime (UserData.gd_current_procrastination);
//				info += GetTime (UserData.gd_current_session);
//				info += GetTime (UserData.gd_total_time_Wasted);
				info += "\nClockSpawnMode: " + GameController.current.ClockSpawnMode;
//				info += "\n" + DragRigidbody.current;
				return info;
			}

		}

	}
}