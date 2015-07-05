using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {
	public class Timer : MonoBehaviour {

		public static Timer timer;
		public const string TimeWasted = "Time Wasted last game";
		public const string TotalTimeWasted = "Total Time Wasted";
		public static PauseManager pauseManager;
		public bool paused  {
			get {
				return canvas.enabled;
			}
		}

//		float time;
		public static float totalTime {
			get {
				return PlayerPrefs.GetFloat(TotalTimeWasted);
			}
		}


		public static float lastTime {
			get {
				return PlayerPrefs.GetFloat(TimeWasted);
			}
		}

		public static string lastTimeText {
			get {
				var seconds = lastTime;
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
		}

		public static string totalTimeText {
			get {
				var seconds = totalTime;
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
		}
		// Use this for initialization

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
			print ("Last time: " + lastTime + ", total time: " + totalTime);
			Pause (false);
			if (lastTime > 1) {
				Pause(true);
			}

		}

		
		// Update is called once per frame
	
		void Update()
		{
			if (!paused) {
				var newTotal = totalTime + Time.deltaTime;
				PlayerPrefs.SetFloat (TimeWasted, Time.fixedTime);
				PlayerPrefs.SetFloat (TotalTimeWasted, newTotal);
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
		void OnGUI(){
			if (paused) {
				//				myStyle.font = myFont;
				string text;
				if (information) {
					text = 
						"In total you've only managed to waste " + ofDevTimeWasted + 
						"\n of the time I've lost developing this game." +
						"\n\n Try again?";
				} else {
					text = "Congratulations. You have wasted " + Timer.lastTimeText;
					var activities = Timer.WhatYouCouldHaveDone (PlayerPrefs.GetFloat (Timer.TotalTimeWasted));
					var rand = Random.Range (0, activities.Count); 
					text += "\n\nDuring that time you could have " + activities [rand];

				}
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
		
		
		
		public void Pause(bool pause) {
			canvas.enabled = pause;
			this.canvas.enabled = pause;
			Time.timeScale = pause ? 0 : 1;
			
		}

		void OnApplicationFocus(bool focusStatus) {
			if (!focusStatus) {
				Pause(true);
			}
		}
	}
}