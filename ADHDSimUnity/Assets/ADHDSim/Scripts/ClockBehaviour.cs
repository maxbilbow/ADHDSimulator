using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {
	public class ClockBehaviour : MonoBehaviour {
		// Use this for initialization
		public Vector3 startingPoint;
		public static List<ClockBehaviour> clocks = new List<ClockBehaviour> ();
		bool isOffScreen = false;
		float fellOffAtTime = 0f;
		public float MaxTimeOffScreen = 30f;
		private float OffScreenLimit = 5f;
		public Rigidbody2D body {
			get {
				return GetComponent<Rigidbody2D>();
			}
		}

		public static ClockBehaviour New() {
			var clone = new GameObject ();
			var original = GameObject.Find("Clock");
			var clock = clone.AddComponent<ClockBehaviour> ();
			clone.AddComponent<CircleCollider2D> ();
			clone.AddComponent<Rigidbody2D> ();
			var renderer = clone.AddComponent<SpriteRenderer> ();
			renderer.sprite = original.GetComponent<SpriteRenderer> ().sprite;
			clone.AddComponent<DragRigidbody> ();

			clock.MaxTimeOffScreen = Random.Range (0, 120);
			var lastClock = clocks [clocks.Count - 1];
			float dy = lastClock.transform.position.y + lastClock.collisionBody.bounds.size.magnitude;
			clock.startingPoint.y = dy;
			return clock;
		}
	
		public Collider2D collisionBody {
			get {
				return GetComponent<Collider2D>();
			}
		}

		void Start () {
			clocks.Add (this);
			if (MaxTimeOffScreen < 5) {
				print ("ERROR"); 
				MaxTimeOffScreen = 5;
			}
			if (startingPoint == Vector3.zero && transform.position != Vector3.zero) {
				startingPoint = transform.position;
			}
		}

		void OnDestroy(){
			clocks.Remove (this);
		}

		// Update is called once per frame
		void Update () {
			if (isOffScreen) {
				if (Time.fixedTime - fellOffAtTime > OffScreenLimit) {
					var screen = new Vector3(0,Screen.height,0);
					var world = Camera.main.ScreenToWorldPoint(screen);
					ResetWithPosition(new Vector3(0,world.y + collisionBody.bounds.size.magnitude,0));
					isOffScreen = false;
				} else {
//					print ( Time.fixedTime - fellOffAtTime + " < " + OffScreenLimit );
				}
			}
		}

		void OnBecameInvisible() {
			if (!GoAwayText.text.isActiveAndEnabled) {
				GoAwayText.text.gameObject.SetActive(true);
				isOffScreen = true;
				fellOffAtTime = Time.fixedTime;
				OffScreenLimit = Random.Range(GameController.isFirstPlay ? 5 : 0, MaxTimeOffScreen);
//				body.isKinematic = true;
			}
		}
	
		void OnBecameVisible() {
			if (GoAwayText.text.isActiveAndEnabled) {
				GoAwayText.text.gameObject.SetActive(false);
				isOffScreen = false;
//				body.isKinematic = false;
			}
		}

		public void ResetWithPosition(Vector3 position) {
			transform.position = position;
			body.velocity = Vector2.zero;
		}
		public void Reset() {
			ResetWithPosition (startingPoint);
		}



	}
}