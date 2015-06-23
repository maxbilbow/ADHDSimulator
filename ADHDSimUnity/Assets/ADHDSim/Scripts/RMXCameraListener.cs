using UnityEngine;
using System.Collections;

public class RMXCameraListener : RMXGameObject {

	public bool switchBehavioursWhenActivated = false;
//	public MonoBehaviour behaviour;
	public GameObject activeBehaviour;
	public GameObject inactiveBehaviour;
	// Use this for initialization
	void Start () {
		if (this.parent == rmx.GetActiveCameraMount()) {
			print (name + " is the active camera");
			this.Activate ();
		} else {
			print (name + " is not the active camera");
			this.Deactivate ();
		}
	}

	public override void Enable() {
		base.Activate ();
		if (switchBehavioursWhenActivated && this.parent == rmx.GetActiveCameraMount()) {
			print("activating " + name);
			try {
				activeBehaviour.GetComponent<RMXBehaviour>().enableScript();
			} catch {}
			try {
				inactiveBehaviour.GetComponent<RMXBehaviour>().disableScript();
			} catch {}
		}
	}

	public override void Disable() {
		base.Deactivate ();
		if (switchBehavioursWhenActivated && this.parent != rmx.GetActiveCameraMount()) {
			print("deactivating " + name);
			try {
				activeBehaviour.GetComponent<RMXBehaviour>().disableScript();
			} catch {}
			try {
				inactiveBehaviour.GetComponent<RMXBehaviour>().disableScript();
			} catch {}
		}
	}

	/*
	public void OnGUI ()
	{
		if(GUI.Button(new Rect(10,10,150,100), "Click"))
		{
			Debug.Log("Button Clicked");
		}
	}

*/



	// Update is called once per frame
	void Update () {
	
	}


}
