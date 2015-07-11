using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SocialPlatforms;
namespace RMX {

	public class Timer : MonoBehaviour {

		GameCenter gameCenter;

		public static Timer timer;
		public int newClockPercent = 50;

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
			} else {
				result += "not a second longer.";
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
			canvas.enabled = false;
			if (lastSessionTime > 0) {
				newSession = true;
				Pause (true);
			} else {
				newSession = false;
			}

		}



		void Update()
		{
			if (!paused) {
				GameController.UpdateScoresAndReset(false);
			}
			if (Input.GetKeyDown(KeyCode.Escape))
			{
				Pause (!paused);
			}
		}

		public void Save() {

		}


	 	string ofDevTimeWasted {
			get {
				return Mathf.Round(Timer.totalTime * 100 / GameData.devTimeWasted) / 100 + "%";
					
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
				style.fontSize = 50;
				style.richText = true;
				style.wordWrap = true;
				style.alignment = TextAnchor.MiddleCenter;
				style.padding.left = style.padding.right = style.padding.top = style.padding.bottom = 50;
				
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
		public bool newPersonalBest = false;

		bool firstLoad = true;
		public void Pause(bool pause) {
			if (pause && !paused) {
//				PlayerPrefs.SetFloat (Key.LastProcrastination, Time.fixedTime - uninteruptedTime);
//				UpdateScoresAndReset (true);
				float time;
				if (newSession) {
					time = Timer.lastSessionTime;
					text = "Congratulations. During your last session, you wasted " + GetTimeDescription (Key.LastSession);
					newSession = false;
				} else {
					time = Timer.lastProcrastination;
					text = "Congratulations. You have wasted " + GetTimeDescription (Key.LastProcrastination);
					if (newPersonalBest) {
						text += "\nA NEW PERSONAL BEST!";
						newPersonalBest = false;
						GameCenter.ReportScore(time, UserData.LongestProctrastination);

					}

				}
				
				List<string> activities = GameData.WhatYouCouldHaveDone (time);
				var rand = Random.Range (0, activities.Count); 
				text += "\n\nDuring that time you could have " + activities [rand];
				canvas.enabled = true;

//				uninteruptedTime = Time.fixedTime;
			} else if (!pause && paused) {
				ClockBehaviour.CheckVisibleClocks();
				GameController.UpdateScoresAndReset (true);
				canvas.enabled = false;

				if (firstLoad) {
					firstLoad = false;
				} else if (Random.Range(0,100) > newClockPercent && paused && !pause && totalTime > GameController.control.newClockThreshold) {
					ClockBehaviour.New();
				}
			}
			Time.timeScale = pause ? 0 : 1;
//			this.canvas.enabled = pause;
//			print (this);

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