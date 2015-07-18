using UnityEngine;
using System.Collections;
//using UnityStandardAssets.CrossPlatformInput;

namespace RMX {
	public class GameController : ASingleton<GameController> {
		public Vector2 defaultGravity = new Vector2 (0f, -9.81f);
		public GameData gameData;
		public float newClockThreshold = 120;
		public float maxNumberOfClocks = 50;
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
			isFirstPlay = PlayerPrefs.GetFloat(GameData.GetKey(UserData.Total)) == 0;

		}

		void StartSingletons() {
			this.gameData = GameData.Initialize ();
			GameCenter.Initialize ();
			Timer.Initialize ();
			DragRigidbody.Initialize ();
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
			if (Input.touchCount > 2 && GameCenter.current.HasAchieved(UserData.AmeteurCrastinator)) {
				ClockBehaviour.New();
				if (!GameCenter.current.HasAchieved(UserData.MakingTime))
					GameCenter.current.UpdateAchievement(UserData.MakingTime,100);
				if (ClockBehaviour.clocks.Count > maxNumberOfClocks) {
//					GameCenter.UpdateAchievement(UserData.TooMuchTime,100);
					var toDestroy = ClockBehaviour.clocks[1];
					ClockBehaviour.clocks.RemoveAt(1);
					Destroy(toDestroy.gameObject);
				}
			}
		}


		public void UpdateScoresAndReset(bool reset) {
			var newTotal = gameData.totalTime + Time.deltaTime;
			var currentTotal = gameData.currentProcrastination + Time.deltaTime;
			PlayerPrefs.SetFloat (GameData.GetKey(UserData.Total), newTotal);
			PlayerPrefs.SetFloat (GameData.GetKey(UserData.CurrentSession), Time.fixedTime);
			PlayerPrefs.SetFloat (GameData.GetKey(UserData.CurrentProcrastination), currentTotal);
			gameData.newPersonalBest = gameData.currentProcrastination > gameData.longestProcrastination;
			if (gameData.newPersonalBest) {
				PlayerPrefs.SetFloat(GameData.GetKey(UserData.LongestProctrastination), gameData.currentProcrastination);
			}
			if (reset) {
				PlayerPrefs.SetFloat (GameData.GetKey(UserData.CurrentProcrastination), 0);
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
