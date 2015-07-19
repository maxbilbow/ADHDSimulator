using UnityEngine;
using System.Collections;
//using UnityStandardAssets.CrossPlatformInput;

namespace RMX {
	public class GameController : ASingleton<GameController> {
		public Vector2 defaultGravity = new Vector2 (0f, -9.81f);
		public GameData gameData;
		public int maxNumberOfClocks = 50;
		public TextAsset database;
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
			isFirstPlay = SavedData.Get(UserData.TotalTime).Float == 0;

		}

		void StartSingletons() {
			this.gameData = GameData.Initialize ();
			GameCenter.Initialize ();
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
			gameData.newPersonalBest = gameData.currentProcrastination > gameData.longestProcrastination;
			if (gameData.newPersonalBest) {
				SavedData.Get(UserData.LongestProctrastination).Float = gameData.currentProcrastination;
			}
			if (reset) {
				SavedData.Get(UserData.CurrentProcrastination).Float = 0;
			}
		}

		void OnApplicationQuit() {
			UpdateScoresAndReset (false);
			long ofDevTime = gameData.GetLong (UserData.OfDevTime);
			GameCenter.current.ReportScore(ofDevTime, UserData.OfDevTime);
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
			}
		}
		
	}
}
