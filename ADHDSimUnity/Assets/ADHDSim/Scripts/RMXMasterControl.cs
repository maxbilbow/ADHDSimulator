using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;


public class RMXMasterControl : RMXGameObject {

	public static RMXMasterControl control;
	private Camera[] cameras;
	private int current = 0;

	public Camera activeCamera {
		get {
			return this.cameras [this.current];
		}
	}
	
	public GameObject GetActiveCameraMount() {
		return activeCamera.GetComponent<RMXCameraListener> ().Parent ();
	}

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

		this.cameras = new Camera [Camera.allCamerasCount];
		Camera.GetAllCameras(this.cameras);
		this.nextCamera ();
		try {
		#if MOBILE_INPUT
		GameObject.Find ("DesktopInput").SetActive(false);
		#else
		GameObject.Find ("MobileInput").SetActive (false);
		#endif
		} catch {
			print ("No inputs specified");
		}
	}
	
	
	// Update is called once per frame
	void Update () {
		if (CrossPlatformInputManager.GetButtonUp ("switchCamera")) {
			this.nextCamera();
		}
	}
	
	public void nextCamera() {
		
		if (++this.current >= this.cameras.Length) {
			this.current = 0;
		}
		for (int i = 0; i < this.cameras.Length; ++i) {
			if (i == current ) {
				try {
					this.cameras[i].SendMessage("Enable");
					this.cameras[i].enabled = true;
				} catch {
					this.cameras[i].enabled = true;
				}
				//				this.cameras [current].SendMessage ("activate");
			} else {
				try {
					this.cameras[i].SendMessage("Disable");
					this.cameras[i].enabled = false;
				} catch {
					this.cameras[i].enabled = false;
				}
			}
		}
		
		
	}

}
