using UnityEngine;
using System.Collections;
using UnityStandardAssets.CrossPlatformInput;


public class RMXMasterControl : RMXGameObject {
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
	
	
	//	public void move(string direction) {
	//		int x = 0;
	//		int y = 0;
	//		switch (direction) {
	//		case "w":
	//			y = 1;
	//			break;
	//		case "s":
	//			y = -1;
	//			break;
	//		case "a":
	//			x = -1;
	//			break;
	//		case "d":
	//			x = 1;
	//			break;
	//		}	
	//		int speed = 10;
	//		UnityEngine.EventSystems.AxisEventData.ReferenceEquals (x * speed, y * speed);
	//		UnityEngine.EventSystems.AxisEventData.Equals(x * speed ,y * speed);
	//		UnityEngine.Event.KeyboardEvent (direction);
	//	}
}
