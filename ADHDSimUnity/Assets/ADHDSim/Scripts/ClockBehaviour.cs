using UnityEngine;
using System.Collections;

namespace ADHD {
	public class ClockBehaviour : MonoBehaviour {
		// Use this for initialization
		public Vector3 startingPoint;
		public GameObject goAwayText;
		void Start () {
			if (startingPoint == Vector3.zero && transform.position != Vector3.zero) {
				startingPoint = transform.position;
			}
		}
		
		// Update is called once per frame
		void Update () {
		
		}

		void OnBecameInvisible() {
			if (!goAwayText.activeInHierarchy) {
				goAwayText.GetComponent<GoAwayText>().ActivateWithObject(this);
			}
		}
	
		void OnBecameVisible() {
			if (goAwayText.activeInHierarchy) {
				goAwayText.GetComponent<GoAwayText>().Deactivate();
			}
		}

		public bool fellOffTheScreen {
			get {
				return !GeometryUtility.TestPlanesAABB(GeometryUtility.CalculateFrustumPlanes(Camera.current), gameObject.GetComponent<Collider2D>().bounds);
//				return ( self.point.y < self.ma
			}
		}

		public void Reset() {
			transform.position = startingPoint;
			GetComponent<Rigidbody2D> ().velocity = Vector2.zero;
		}


	}
}