using UnityEngine;
using System.Collections;
using UnityEngine.UI;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace RMX {
	public class PauseManager : MonoBehaviour {


		public static Canvas canvas {
			get {
				return Timer.pauseManager.GetComponent<Canvas>();
			}
		}
		public static bool isPaused {
			get {
				return PauseManager.canvas.enabled;
			}
		}
//		static float pausedFrom;

		void Awake() {
			if (Timer.pauseManager == null) {
				DontDestroyOnLoad (gameObject);
				Timer.pauseManager = this;
			} else if (Timer.pauseManager != this) {
				Destroy (gameObject);
			}
		}

		void Start()
		{
			canvas.enabled = false;
		}
		
		void Update()
		{
//			if (isPaused && Time.fixedTime - pausedFrom > 10) {
//				Pause ();
//			}
			if (Input.GetKeyDown(KeyCode.Escape))
			{
				Pause();
			}
		}
		
		public void Pause()
		{

			canvas.enabled = !canvas.enabled;
			if (isPaused) {
//				pausedFrom = Time.fixedTime;
				var text = GameObject.Find ("timeText").GetComponent<Text> ();
				var text2 = GameObject.Find ("timeText2").GetComponent<Text> ();
				text.text = "Congratulations. You have waisted " + Timer.totalTimeText;

				var activities = Timer.WhatYouCouldHaveDone (PlayerPrefs.GetFloat (Timer.TotalTimeWasted));
				var rand = Random.Range (0, activities.Count); 

				text2.text = "During that time you could have " + activities [rand];
			}
			Time.timeScale = Time.timeScale == 0 ? 1 : 0;
		}
		
		public void Quit()
		{
			#if UNITY_EDITOR 
			EditorApplication.isPlaying = false;
			#else 
			Application.Quit();
			#endif
		}
	}
}