using UnityEngine;
using System.Collections;

namespace ADHD {
	public class ClockBehaviour : RMXGameObject {
		// Use this for initialization
		public Vector3 startingPoint;
		public GameObject goAwayText;
		void Start () {
			if (startingPoint == Vector3.zero && position != Vector3.zero) {
				startingPoint = position;
			}
		}
		
		// Update is called once per frame
		void Update () {

			if (fellOffTheScreen && !goAwayText.activeInHierarchy) {
				goAwayText.GetComponent<GoAwayText>().ActivateWithObject(this);
			}
		}

		public bool fellOffTheScreen {
			get {
				return !GeometryUtility.TestPlanesAABB(GeometryUtility.CalculateFrustumPlanes(rmx.activeCamera), gameObject.GetComponent<Collider2D>().bounds);
//				return ( self.point.y < self.ma
			}
		}

		public override void Reset() {
			transform.position = startingPoint;
			GetComponent<Rigidbody2D> ().velocity = Vector2.zero;
		}

	}
}