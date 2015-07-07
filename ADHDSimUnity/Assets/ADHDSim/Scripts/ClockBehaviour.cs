using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {
	public class ClockBehaviour : MonoBehaviour {
		// Use this for initialization
		public Vector3 startingPoint;
		public static List<ClockBehaviour> clocks = new List<ClockBehaviour> ();
		public static ClockBehaviour original;
	
		private static bool IsVisible(ClockBehaviour clock) {
			return clock.isOffScreen;
		}

		public static int visibleClocks = 0 ;
//		{
//			get {
//				return clocks.FindAll(IsVisible).Count;
//			}
//		}

		bool isOffScreen = false;
		float fellOffAtTime = 0f;
		public float MaxTimeOffScreen = 30f;
		private float OffScreenLimit = 5f;
		public Rigidbody2D body {
			get {
				return GetComponent<Rigidbody2D>();
			}
		}

		public CircleCollider2D collisionBody {
			get {
				return GetComponent<CircleCollider2D>();
			}
		}

		float lifeSpan = float.PositiveInfinity;
		void Awake () {
			if (original == null) {
//				DontDestroyOnLoad (gameObject);
				original = this;
			} 
			if (MaxTimeOffScreen < 5) {
				print ("ERROR"); 
				MaxTimeOffScreen = 5;
			}
			clocks.Add (this);
		}

		public static ClockBehaviour New() {
			GameObject clone = new GameObject ();


			var collider = clone.AddComponent<CircleCollider2D> ();
			collider.radius = original.collisionBody.radius;

			var body = clone.AddComponent<Rigidbody2D> ();
			body.mass = original.body.mass;
			body.angularDrag = original.body.angularDrag;
			body.drag = original.body.drag;

			var renderer = clone.AddComponent<SpriteRenderer> ();
			renderer.sprite = original.GetComponent<SpriteRenderer> ().sprite;

//			clone.AddComponent<DragRigidbody> ();

			var clock = clone.AddComponent<ClockBehaviour> ();
			clock.MaxTimeOffScreen = Random.Range (0, 120);
			var lastClock = clocks [clocks.Count - 1];
			clock.startingPoint = lastClock.startingPoint;
			clock.startingPoint.y += lastClock.collisionBody.radius * 2;
			clock.Reset ();
			return clock;
		}
	


		void Start () {
			if (original != this) {
				lifeSpan = Random.Range (0, MaxTimeOffScreen);
			}


			if (startingPoint == Vector3.zero && transform.position != Vector3.zero) {
				startingPoint = transform.position;
			}
		}

		void OnDestroy(){
			clocks.Remove (this);
			print (visibleClocks);
			if (!isOffScreen)
				visibleClocks--;
		}

		// Update is called once per frame
		void Update () {
			if (this != original) {
				lifeSpan -= Time.deltaTime;
			}

			if (isOffScreen) {
				if (lifeSpan <= 0) {
					Destroy(gameObject);
				} else if (Time.fixedTime - fellOffAtTime > OffScreenLimit) {
					var screen = new Vector3(0,Screen.height,0);
					var world = Camera.main.ScreenToWorldPoint(screen);
					ResetWithPosition(new Vector3(0,world.y + collisionBody.bounds.size.magnitude,0));
					isOffScreen = false;
				}
			}

		}

		void OnBecameInvisible() {
			isOffScreen = true;
			fellOffAtTime = Time.fixedTime;
			OffScreenLimit = Random.Range(GameController.isFirstPlay ? 5 : 0, MaxTimeOffScreen);
			visibleClocks--;
		}
	
		void OnBecameVisible() {
			isOffScreen = false;
			visibleClocks++;
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