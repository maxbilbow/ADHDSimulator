using UnityEngine;
using System.Collections;
//using UnityStandardAssets.CrossPlatformInput;

namespace RMX {
	public class GameController : MonoBehaviour {
		public Vector2 defaultGravity = new Vector2 (0f, -9.81f);
		public static GameController control;
		public GameObject mobileInput;
		public GameObject desktopInput;
//		public GameCenter gameCenter;// = new GameCenter ();
		public float newClockThreshold = 120;
		public float maxNumberOfClocks = 50;
		public TextAsset database;
		public Vector2 velocity {
			get {
				return new Vector2(transform.forward.x, transform.forward.y);
			}
		}

		public static bool isFirstPlay;
		
		//	private int total = Camera.GetAllCameras.count;
		// Use this for initialization
		protected void Awake () {
			Physics2D.gravity = defaultGravity;
			isFirstPlay = PlayerPrefs.GetFloat(GameData.GetKey(UserData.Total)) == 0;
			if (control == null) {
				DontDestroyOnLoad (gameObject);
				control = this;
			} else if (control != this) {
				Destroy (gameObject);
			}

			if (!desktopInput) {
				try {
					desktopInput = GameObject.Find ("DesktopInput");
				} catch {
					print ("Desktop input not found");
				} finally {
					
				}
			}
			if (!mobileInput) {
				try {
					mobileInput = GameObject.Find ("MobileInput");
				} catch {
					print ("Mobile input not found");
				}
			}


			#if MOBILE_INPUT
			var set = GameObject.FindGameObjectsWithTag ("DesktopOnly");
			#else
			var set = GameObject.FindGameObjectsWithTag ("MobileOnly");
			#endif
			foreach (GameObject obj in set) {
				obj.SetActive(false);
			}
		}



		void Start() {
//			newClockThreshold = Random.Range (0, newClockThreshold);
//			gameCenter = gameObject.AddComponent<GameCenter> ();
			GameCenter.Authenticate ();
			GameCenter.CheckProgress ();
#if DEBUG
//			GameData.TestData ();
#endif
		}
		
		// Update is called once per frame
		private float _checkTime = 30;
		void Update () {
			if (Time.fixedTime > _checkTime) {
				GameCenter.CheckProgress();
				_checkTime += 30;
			}
			if (Input.touchCount > 2 && GameCenter.achievement[UserData.AmeteurCrastinator]) {
				ClockBehaviour.New();
				GameCenter.UpdateAchievement(UserData.MakingTime,100);
				if (ClockBehaviour.clocks.Count > maxNumberOfClocks) {
//					GameCenter.UpdateAchievement(UserData.TooMuchTime,100);
					var toDestroy = ClockBehaviour.clocks[1];
					ClockBehaviour.clocks.RemoveAt(1);
					Destroy(toDestroy.gameObject);
				}
			}
		}


		public static void UpdateScoresAndReset(bool reset) {
			var newTotal = GameData.totalTime + Time.deltaTime;
			var currentTotal = GameData.currentProcrastination + Time.deltaTime;
			PlayerPrefs.SetFloat (GameData.GetKey(UserData.Total), newTotal);
			PlayerPrefs.SetFloat (GameData.GetKey(UserData.CurrentSession), Time.fixedTime);
			PlayerPrefs.SetFloat (GameData.GetKey(UserData.CurrentProcrastination), currentTotal);
			GameData.newPersonalBest = GameData.currentProcrastination > GameData.longestProcrastination;
			if (GameData.newPersonalBest) {
				PlayerPrefs.SetFloat(GameData.GetKey(UserData.LongestProctrastination), GameData.currentProcrastination);
			}
			if (reset) {
				PlayerPrefs.SetFloat (GameData.GetKey(UserData.CurrentProcrastination), 0);
			}
		}

		void OnApplicationQuit() {
			UpdateScoresAndReset (false);
			long ofDevTime = GameData.GetLong (UserData.OfDevTime);
			GameCenter.ReportScore(ofDevTime, UserData.OfDevTime);
			PlayerPrefs.Save ();
		}
		
		void OnApplicationFocus(bool focusStatus) {
			if (!focusStatus) {
				Timer.timer.Pause(true);
				GameCenter.CheckProgress ();
			}
		}

		public static void CheckForAnomalies() {
			ClockBehaviour.CheckVisibleClocks ();
		}
		
	}
}
