using UnityEngine;
using System.Collections;
using UnityEngine.UI;
#if UNITY_EDITOR
using UnityEditor;
#endif

namespace RMX {
	public class PauseManager : MonoBehaviour {

//		Text text1, text2;
		public Canvas canvas {
			get {
				return GetComponent<Canvas>();
			}
		}
		bool paused;
		public bool isPaused {
			get {
				return paused;// PauseManager.canvas.enabled;
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
				Pause (!paused);
			}

			if (paused && Time.timeScale > 0) {
				Time.timeScale = 0;
			} else if (!paused && Time.timeScale == 0) {
				Time.timeScale = 1;
			}
		}

		public void OnApplicationPause(bool paused) {
			if (paused) {
				Pause (true);
			}
		}



		public void Pause(bool pause) {
			canvas.enabled = pause;
			this.paused = pause;
			Time.timeScale = pause ? 0 : 1;

		}

	

		public void Quit()
		{
			#if UNITY_EDITOR 
			EditorApplication.isPlaying = false;
			#else 
			Application.Quit();
			#endif
		}
		
		void OnApplicationFocus(bool focusStatus) {
			if (!focusStatus) {
				Pause(true);
			}
		}
	}
}