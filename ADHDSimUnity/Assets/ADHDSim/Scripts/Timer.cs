using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {
	public struct Key {
		public const string LastSession= "last session";
		public const string LongestProcrastination = "longestProcrastination";
		public const string LastProcrastination = "last uninterupted";
		public const string Total = "Total Time Wasted";
	}

	public class Timer : MonoBehaviour {

		GameCenter gameCenter;

		public static Timer timer;


		public static PauseManager pauseManager;
		public bool paused  {
			get {
				return canvas.enabled;
			}
		}

//		float time;
		public static float totalTime {
			get {
				return PlayerPrefs.GetFloat(Key.Total);
			}
		}


		public static float lastProcrastination {
			get {
				return PlayerPrefs.GetFloat(Key.LastProcrastination);
			}
		}

		public static float lastSessionTime {
			get {
				return PlayerPrefs.GetFloat(Key.LastSession);
			}
		}

		public static float longestProcrastination {
			get {
				return PlayerPrefs.GetFloat(Key.LongestProcrastination);
			}
		}

	
		public static string GetTimeDescription(string key) {
			var seconds = PlayerPrefs.GetFloat(key);
			int minutes = (int) seconds / 60;
			int hours = minutes / 60;
			seconds = Mathf.Round(seconds % 60);
			string result = "";
			if (hours > 0) {
				result += hours + " hours, ";
			}
			if (minutes > 0) {
				result += minutes + " minutes and ";
			}
			if (seconds > 0) {
				result += seconds + " seconds.";
			}
			return result;
		}


		void Awake() {
			if (timer == null) {
				DontDestroyOnLoad (gameObject);
				timer = this;
			} else if (timer != this) {
				Destroy (gameObject);
			}
		}

		public Canvas canvas {
			get {
				return GetComponentInChildren<Canvas>();
			}
		}

		void Start () {
//			time = 0;
			print (this);
			Pause (false);
			if (lastSessionTime > 0) {
				newSession = true;
				Pause (true);
			} else {
				newSession = false;
			}

		}

		
		// Update is called once per frame
//		
		void Update()
		{
			if (!paused) {
				var newTotal = totalTime + Time.deltaTime;
				PlayerPrefs.SetFloat (Key.Total, newTotal);


			}
			if (Input.GetKeyDown(KeyCode.Escape))
			{
				Pause (!paused);
			}
		}

		public void Save() {

		}



		public static List<string> WhatYouCouldHaveDone(float time) {
			var timeInMinutes = time / 60;
			List<string> result = new List<string> ();
			if (timeInMinutes < 1) {
				result.Add ("briefly checked for new emails");
			} else if (timeInMinutes < 2) {
				result.Add ("re-heated that cold cup of coffee using the microvave.");
			} else if (timeInMinutes < 4) {
				result.Add ("soft-boiled an egg.");
			} else if (timeInMinutes < 6) {
				result.Add ("hard boilded an egg.");
			} else {
				result.Add ("had a good long think about your existence.");
			}
			return result;
		}
		const float devTimeWasted = 6 * 60 * 60;
	 	string ofDevTimeWasted {
			get {
				return Mathf.Round(Timer.totalTime * 100 / devTimeWasted) / 100 + "%";
					
			}
		}
	
		public void ShowInfo() {
			information = !information;
		}

		bool information = false;
		bool newSession = true;
		void OnGUI(){
			if (paused) {
				//				myStyle.font = myFont;
				string text = !information ? this.text :
						"In total you've only managed to waste " + ofDevTimeWasted + 
							"\n of the time I've lost developing this game." +
							"\n\n Try again?";
				GUIStyle style = new GUIStyle ();
				style.fontSize = 20;
				style.richText = true;
				style.wordWrap = true;
				style.alignment = TextAnchor.MiddleCenter;
				style.padding.left = style.padding.right = style.padding.top = style.padding.bottom = 25;
				
				GUI.Label (new Rect (0, 0, Screen.width, Screen.height), text, style);

			} else if (information) {
				information = false;
			}
		}

		public void OnApplicationPause(bool paused) {
			if (paused) {
				Pause (true);
			}
		}
		string text = "";
		bool newPersonalBest = false;
		float uninteruptedTime = 0;
		public void Pause(bool pause) {
			if (pause && !paused) {
				PlayerPrefs.SetFloat (Key.LastProcrastination, Time.fixedTime - uninteruptedTime);
				if (lastProcrastination > longestProcrastination) {
					newPersonalBest = longestProcrastination > 0;
					PlayerPrefs.SetFloat(Key.LongestProcrastination, lastProcrastination);

				}
				float time;
				if (newSession) {
					time = Timer.lastSessionTime;
					text = "Congratulations. During your last session, you wasted " + GetTimeDescription(Key.LastSession);
					newSession = false;
				} else {
					time = Timer.lastProcrastination;
					text = "Congratulations. You have wasted " + GetTimeDescription(Key.LastProcrastination);
					if (newPersonalBest) {
						text += "\nA NEW PERSONAL BEST!";
						newPersonalBest = false;
					}
				}
				
				var activities = Timer.WhatYouCouldHaveDone (time);
				var rand = Random.Range (0, activities.Count); 
				text += "\n\nDuring that time you could have " + activities [rand];
					

				uninteruptedTime = Time.fixedTime;
			}
			Time.timeScale = pause ? 0 : 1;
			this.canvas.enabled = pause;
			print (this);
			if (!pause) {
				ClockBehaviour.New();
			}
		}

		void OnApplicationQuit() {
			PlayerPrefs.SetFloat (Key.LastSession, Time.fixedTime);
			PlayerPrefs.Save ();
		}

		void OnApplicationFocus(bool focusStatus) {
			if (!focusStatus) {
				Pause(true);
			}
		}

		public override string ToString ()
		{
			string s = 
					"          Last time: " + lastSessionTime + ", last coninuous: " + lastProcrastination + ", total time: " + totalTime +
					"\nLast Uniterrupted: " + GetTimeDescription(Key.LastProcrastination) + " and top: " + GetTimeDescription(Key.LongestProcrastination) +
					"\n     Last Session: " + GetTimeDescription(Key.LastSession) +
					"\n            Total: " + GetTimeDescription(Key.Total)
					;
			return s;
		}
	}
}