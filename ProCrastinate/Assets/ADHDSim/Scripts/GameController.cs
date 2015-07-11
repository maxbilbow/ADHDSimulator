using UnityEngine;
using System.Collections;
//using UnityStandardAssets.CrossPlatformInput;

namespace RMX {
	public class GameController : MonoBehaviour {
		public Vector2 defaultGravity = new Vector2 (0f, -9.81f);
		public static GameController control;
		public GameObject mobileInput;
		public GameObject desktopInput;
		public GameCenter gameCenter;// = new GameCenter ();
		public float newClockThreshold = 120;
		public Vector2 velocity {
			get {
				return new Vector2(transform.forward.x, transform.forward.y);
			}
		}

		public static bool isFirstPlay;
		
		//	private int total = Camera.GetAllCameras.count;
		// Use this for initialization
		protected void Awake () {
			GameCenter.Authenticate ();
			Physics2D.gravity = defaultGravity;
			isFirstPlay = PlayerPrefs.GetFloat(Key.Total) == 0;
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
			gameCenter = gameObject.AddComponent<GameCenter> ();
		}
		
		// Update is called once per frame
		void Update () {

		}

		
		public static void UpdateScoresAndReset(bool reset) {
			var newTotal = Timer.totalTime + Time.deltaTime;
			var currentTotal = Timer.lastProcrastination + Time.deltaTime;
			PlayerPrefs.SetFloat (Key.Total, newTotal);
			PlayerPrefs.SetFloat (Key.LastSession, Time.fixedTime);
			PlayerPrefs.SetFloat (Key.LastProcrastination, currentTotal);
			if (Timer.lastProcrastination > Timer.longestProcrastination) {
				Timer.timer.newPersonalBest = Timer.longestProcrastination > 0;
				PlayerPrefs.SetFloat(Key.LongestProcrastination, Timer.lastProcrastination);
			}
			if (reset) {
				PlayerPrefs.SetFloat (Key.LastProcrastination, 0);
			}
		}

		void OnApplicationQuit() {
			UpdateScoresAndReset (false);
			float ofDevTime = GameData.GetFloat (UserData.OfDevTime);
			GameCenter.ReportScore((long) ofDevTime, GameData.GetID(UserData.CurrentSession));
			GameCenter.UpdateAchievement (UserData.OfDevTime, ofDevTime);
			PlayerPrefs.Save ();
		}
		
		void OnApplicationFocus(bool focusStatus) {
			if (!focusStatus) {
				Timer.timer.Pause(true);
			}
		}

		public static void CheckForAnomalies() {
			ClockBehaviour.CheckVisibleClocks ();
		}
		
	}
}
