using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;

namespace RMX {
	public class GameController : MonoBehaviour {
		
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
			if (desktopInput) {
				desktopInput.SetActive(false);
			}
			#else
			if (mobileInput) {
				mobileInput.SetActive(false);
			}
			#endif
		}

		void Start() {
//			newClockThreshold = Random.Range (0, newClockThreshold);
			gameCenter = gameObject.AddComponent<GameCenter> ();
		}
		
		// Update is called once per frame
		void Update () {

		}
		

			
		
	}
}
