using UnityEngine;
using System.Collections;

namespace RMX {
	public class RMXGameObject : MonoBehaviour {

	 	protected bool isRootObject;
		protected GameController rmx {
			get {
				return GameController.control;
			}
		}

		public bool deactivateOnLaunch = false;
		public bool disableOnLaunch = false;
		protected GameObject parent;
		// Use this for initialization
		protected virtual void Awake () {
			try {
				parent = transform.parent.gameObject;//GameObject.Find (transform.parent.name);
				isRootObject = false;
			} catch {
//				parent = rmx.gameObject;
				isRootObject = true;
			}
		}

		void Start() {
			if (deactivateOnLaunch) {
				Deactivate();
			}
			if (disableOnLaunch) {
				Disable();
			}
		}

		public virtual void Enable() {
			enabled = true;
		}

		public virtual void Disable() {
			enabled = false;
		}

		public virtual void Activate() {
			gameObject.SetActive (true);
	//		var behaviour = GetComponentInParent<MonoBehaviour> ();
	//		behaviour.enabled = true;
	//		print (name + " is active!");
		}
		
		public virtual void Deactivate() {
			gameObject.SetActive (false);
	//		var behaviour = GetComponentInParent<MonoBehaviour> ();
	//		behaviour.enabled = false;
	//		print (name + " is NOT Active!");
		}
		
		// Update is called once per frame
		void Update () {
		
		}

		public Vector2 point {
			get {
				return new Vector2(transform.position.x, transform.position.y);
			}
		}

		public Vector3 position {
			get {
				return transform.position;
			}
		}

		public Vector3 direction {
			get {
				return transform.forward;
			}
		}

		public GameObject Parent() {
			return parent;
		}

		public bool hasSameParentAs(RMXGameObject rmxObject) {
			return rmxObject.Parent () == this.Parent();
		}

		public virtual void Reset() {}
	}
}
