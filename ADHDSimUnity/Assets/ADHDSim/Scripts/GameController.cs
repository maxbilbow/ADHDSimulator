using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;

namespace RMX {
	public class GameController : RMXGameObject {
		
		public static GameController control;
		public GameObject mobileInput;
		public GameObject desktopInput;
		public GameCenter gameCenter = new GameCenter ();

		public Vector2 velocity {
			get {
				return new Vector2(transform.forward.x, transform.forward.y);
			}
		}
		
		//	private int total = Camera.GetAllCameras.count;
		// Use this for initialization
		protected override void Awake () {
			base.Awake();
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
		
		
		// Update is called once per frame
		void Update () {

		}
		

			
		
	}
}
