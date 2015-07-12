using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using UnityEngine.SocialPlatforms;
namespace RMX {

	public class Timer : MonoBehaviour {

//		GameCenter gameCenter;

		public static Timer timer;
		public int newClockPercent = 50;

		public static PauseManager pauseManager;
		public bool paused  {
			get {
				return canvas.enabled;
			}
		}

//		float time;


	
		public static string GetTimeDescription(float timeInSeconds) {
			var seconds = timeInSeconds;//PlayerPrefs.GetFloat(GameData.GetKey(key));
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
			if (GameData.currentSessionTime > 0) {
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
				float percent = Mathf.Round(100 * GameData.totalTime / GameData.devTimeWasted) / 100;
//				print ("Total: " + GameData.totalTime + ", dev: " + GameData.devTimeWasted + " = " + percent);
				return percent + "%";
					
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


		bool firstLoad = true;
		public void Pause(bool pause) {
			if (pause && !paused) {
				GameCenter.ReportScore(GameData.GetLong(UserData.CurrentProcrastination), UserData.LongestProctrastination);
//				PlayerPrefs.SetFloat (Key.LastProcrastination, Time.fixedTime - uninteruptedTime);
//				UpdateScoresAndReset (true);
				float time;
				if (newSession) {
					time = GameData.currentSessionTime;
					text = "Congratulations. During your last session, you wasted " + GetTimeDescription (GameData.currentSessionTime);
					newSession = false;
				} else {
					time = GameData.currentProcrastination;
					text = "Congratulations. You have wasted " + GetTimeDescription (GameData.currentProcrastination);
					if (GameData.newPersonalBest) {
						text += "\nA NEW PERSONAL BEST!";
						GameData.newPersonalBest = false;

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


				if (firstLoad) {
					firstLoad = false;
				} else if (Random.Range(0,100) > 60 && paused && !pause && GameData.totalTime > GameController.control.newClockThreshold) {
					ClockBehaviour.New();
				}
				canvas.enabled = false;
			}
			Time.timeScale = pause ? 0 : 1;
//			this.canvas.enabled = pause;
//			print (this);

		}



		public override string ToString ()
		{
			string s = 
				"              Last time: " + GameData.currentSessionTime + ", last coninuous: " + GameData.currentProcrastination + ", total time: " + GameData.totalTime +
					"\nLast Uniterrupted: " + GetTimeDescription(GameData.currentProcrastination) + " and top: " + GetTimeDescription(GameData.longestProcrastination) +
					"\n     Last Session: " + GetTimeDescription(GameData.currentSessionTime) +
					"\n            Total: " + GetTimeDescription(GameData.totalTime)
					;
			return s;
		}
	}
}