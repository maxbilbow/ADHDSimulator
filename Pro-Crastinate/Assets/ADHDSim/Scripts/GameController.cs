using UnityEngine;
using System.Collections;
using System.Collections.Generic;
//using UnityStandardAssets.CrossPlatformInput;

namespace RMX {
	public class GameController : ASingleton<GameController> {
		public Vector2 defaultGravity = new Vector2 (0f, -9.81f);

		public Vector2 velocity {
			get {
				return new Vector2(transform.forward.x, transform.forward.y);
			}
		}

		public PauseCanvas pauseCanvas {
			get {
				return PauseCanvas.current;
			}
		}
		public static bool isFirstPlay;
		
		//	private int total = Camera.GetAllCameras.count;
		// Use this for initialization
		protected override void Awake () {
			base.Awake ();
			Physics2D.gravity = defaultGravity;
			isFirstPlay = PlayerPrefs.GetString(SavedData.GetKey(UserData.TotalTime)) != null;
		}

		public delegate ISingleton LateInit();
//		public static List<LateInit> lateInits = new List<LateInit>() {
//			Bugger.Initialize,
//			GameCenter.Initialize ,
//			GameData.Initialize ,
//			DataReader.Initialize ,
//			Timer.Initialize ,
//			DragRigidbody.Initialize ,
//			ClockSpawner.Initialize ,
//			PauseCanvas.Initialize 
//		};

		void StartSingletons() {
			Settings.Initialize ();
			Bugger.Initialize ();
			GameCenter.Initialize ();
			GameData.Initialize ();
			DataReader.Initialize ();
			Timer.Initialize ();
			DragRigidbody.Initialize ();
			ClockSpawner.Initialize ();
			PauseCanvas.Initialize ();
		}


		void StartDesktop() {

		}

		void StartMobile() {
			Gyro.Initialize();
		}


		void Start() {
			StartSingletons ();
			#if MOBILE_INPUT
			StartMobile();
			#else
			StartDesktop();
			#endif
		}
	

		
		// Update is called once per frame
		private float _checkTime = 30;
		void Update () {
			if (Time.fixedTime > _checkTime) {
				GameCenter.current.CheckProgress();
				_checkTime += 30;
			}
		}


		public void UpdateScoresAndReset(bool reset) {
			var newTotal = SavedData.Get(UserData.TotalTime).Float + Time.deltaTime;
			var currentTotal = gameData.currentProcrastination + Time.deltaTime;
			SavedData.Get(UserData.TotalTime).Float = newTotal;
			SavedData.Get(UserData.CurrentSession).Float = Time.fixedTime;
			SavedData.Get(UserData.CurrentProcrastination).Float = currentTotal;
			settings.newPersonalBest = gameData.currentProcrastination > gameData.longestProcrastination;
			if (settings.newPersonalBest) {
				SavedData.Get(UserData.LongestProctrastination).Float = gameData.currentProcrastination;
			}
			if (reset) {
				SavedData.Get(UserData.CurrentProcrastination).Float = 0;
			}
		}

		void OnApplicationQuit() {
			UpdateScoresAndReset (false);
//			long ofDevTime = gameData.GetLong (UserData.OfDevTime);
//			SavedData.Get (UserData.CurrentProcrastination).ReportToGameCenter ();
			GameCenter.current.ReportScore(gameData.PercentageOfDevTimeWastedX10000, UserData.PercentageOfDevTime);
//			Debug.LogWarning (gameData.PercentageOfDevTimeWastedX10000);
			PlayerPrefs.Save ();
		}
		
		void OnApplicationFocus(bool focusStatus) {
			if (!focusStatus) {
				PauseGame (true);
			}
		}

		public static void CheckForAnomalies() {
			ClockBehaviour.CheckVisibleClocks ();
		}

		public void PauseGame(bool pause) {
			pauseCanvas.Pause (pause);
			if (pause) {
				GameCenter.current.CheckProgress ();
			} else {
				if (!Social.localUser.authenticated)
					GameCenter.current.Authenticate();
			}
		}
		
	}
}
