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
			if (Input.GetKeyDown(KeyCode.Escape))
			{
				Pause(!isPaused);
			}
		}

		public void OnApplicationPause(bool paused) {
			Pause (true);
		}

		public void Pause(bool enableCanvas)
		{
			canvas.enabled = enableCanvas;
			if (isPaused) {
				var text = GameObject.Find ("timeText").GetComponent<Text> ();
				var text2 = GameObject.Find ("timeText2").GetComponent<Text> ();
				text.text = "Congratulations. You have waisted " + Timer.totalTimeText;

				var activities = Timer.WhatYouCouldHaveDone (PlayerPrefs.GetFloat (Timer.TotalTimeWasted));
				var rand = Random.Range (0, activities.Count); 

				text2.text = "During that time you could have " + activities [rand];
			}
			Time.timeScale = enableCanvas ? 0 : 1;
		}
		
		public void Quit()
		{
			#if UNITY_EDITOR 
			EditorApplication.isPlaying = false;
			#else 
			Application.Quit();
			#endif
		}

		void OnGUI() {
			if (isPaused) 
				GUI.Label(new Rect(100, 100, 50, 30), "Game paused");
			
		}
		
		void OnApplicationFocus(bool focusStatus) {
			if (!focusStatus) {
				Pause(true);
			}
		}
	}
}