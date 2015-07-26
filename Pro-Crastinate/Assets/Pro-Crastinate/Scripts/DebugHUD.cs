using UnityEngine;
using UnityEngine.UI;
using System.Collections;
using System.Collections.Generic;

using RMX;  namespace Procrastinate {
	public class DebugHUD :  MonoBehaviour {//Bugger.DebugHUD {

		
		string GetTime(object key) {
			var time = SavedData.Get<float> (key);
			var timeString = time > 0 ? TextFormatter.TimeDescription (time) : time.ToString ();
			return "\n – " + key.ToString () + ": <color=yellow>" + timeString + "</color>";
		}

		void Start() {
			Show ();
		}

		protected  string DebugData {
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

		public GameObject showButton;
		public GameObject hideButton;
		


		
		bool _show = false;
		public void Show() {
			_show = true;
			showButton.SetActive (false);
			hideButton.SetActive (true);
			//			debugPanel.transform.position = new Vector3 (-slideX, 0, 0);
			//			info.text = "Width: " + Camera.main.pixelWidth.ToString();
		}
		
		public void Hide() {
			_show = false;
			showButton.SetActive (true);
			hideButton.SetActive (false);
			//			debugPanel.transform.position = new Vector3 (slideX, 0, 0);
			//			info.text = "Width: " + Camera.main.pixelWidth.ToString();
		}
		
		

		
		protected bool listSingletons = true; 
		protected bool listObjects = false; 
		
		// Update is called once per frame
		void OnGUI() {
			if (_show) {
				var text = DebugData;
				GUIStyle style = new GUIStyle ();
				//				
//				foreach (ISingleton s in singletons) {
//					text += "\n" + s.name + ", isListening: " + s.isListening;
//				}
				style.richText = true;
				style.wordWrap = true;
				style.alignment = TextAnchor.UpperRight;
				style.padding.left = style.padding.right = style.padding.top = style.padding.bottom = 20;
				//				style.border
				GUI.Label (new Rect (0, 0, Screen.width, Screen.height), TextFormatter.Format(text,Time.timeScale == 0 ? "black" : "white"), style);
				
			}
		}
		
	
	}
}