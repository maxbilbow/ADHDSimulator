using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {
	public class Timer : MonoBehaviour {

		public static Timer timer;
		public const string TimeWasted = "Time Wasted most recent game";
		public const string TotalTimeWasted = "Total Time Wasted";
		public static PauseManager pauseManager;

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
				seconds = seconds % 60;
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
				seconds = seconds % 60;
				string result = "";
				if (hours > 0) {
					result += hours + " hours, ";
				}
				if (minutes > 0) {
					result += minutes + " minutes, ";
				}
				if (seconds > 0) {
					result += "and " + seconds + " seconds.";
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

		void Start () {
//			time = 0;
			print ("Last time: " + lastTime + ", total time: " + totalTime);
			if (lastTime > 0) {
				pauseManager.Pause();
			}
		}
		
		// Update is called once per frame
		void Update () {
			var newTotal = totalTime + Time.deltaTime;
			PlayerPrefs.SetFloat (TimeWasted, Time.fixedTime);
			PlayerPrefs.SetFloat (TotalTimeWasted, newTotal);

//			print ("Last time: " + lastTime + ", total time: " + totalTime);
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

	}
}