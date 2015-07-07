﻿using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {
	public class ClockBehaviour : MonoBehaviour {
		// Use this for initialization
		public Vector3 startingPoint;
		public static List<ClockBehaviour> clocks = new List<ClockBehaviour> ();
		public static ClockBehaviour original;
		private Vector2 exitVelocity;
	
		private static bool IsVisible(ClockBehaviour clock) {
			var wasOn = clock.isOnScreen;
			clock.isOnScreen = GeometryUtility.TestPlanesAABB(GeometryUtility.CalculateFrustumPlanes(Camera.main), clock.gameObject.GetComponent<Collider2D>().bounds);
			if (wasOn != clock.isOnScreen) {
				clock.fellOffAtTime = Time.fixedTime;
			}
			return clock.isOnScreen;
		}

		public static List<ClockBehaviour> CheckVisibleClocks() {
			return clocks.FindAll (IsVisible);
		}

		public static int VisibleClockCount {
			get {
				int count = 0;
				foreach (ClockBehaviour clock in clocks) {
					if (clock.isOnScreen) {
						count++;
					}
				}
//				print ("VisibleClockCount == " + count);
				return count;
			}
		}

//		{
//			get {
//				return clocks.FindAll(IsVisible).Count;
//			}
//		}

		bool isOnScreen = true;
		float fellOffAtTime = 0f;
		public float MaxTimeOffScreen = 30f;
		private float OffScreenLimit = 2f;
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

		bool isOriginal = false;
		float lifeSpan = float.PositiveInfinity;
		void Awake () {
			if (original == null) {
				DontDestroyOnLoad (gameObject);
				original = this;
				isOriginal = true;
			} 
			if (MaxTimeOffScreen < 2) {
				print ("ERROR"); 
				MaxTimeOffScreen = 2;
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
			renderer.color = new Color(
				(float) Random.Range(0,10) / 10, 
				(float) Random.Range(0,10) / 10, 
				(float) Random.Range(0,10) / 10);

//			clone.AddComponent<DragRigidbody> ();

			var clock = clone.AddComponent<ClockBehaviour> ();
			clock.MaxTimeOffScreen = Random.Range (0, 30);
//			clock.life
			var lastClock = clocks [clocks.Count - 1];
			clock.startingPoint = lastClock.startingPoint;
			clock.startingPoint.y += lastClock.collisionBody.radius * 2;

			clock.Reset ();
			return clock;
		}
	
//		public delegate void dfff;// = UpdateVisibleClockCount;

		void Start () {
			if (original != this) {
//				lifeSpan = Random.Range (0, MaxTimeOffScreen);!hit
			} 

			if (startingPoint == Vector3.zero && transform.position != Vector3.zero) {
				startingPoint = transform.position;
			}
		}

		void OnDestroy(){
			clocks.Remove (this);
			print (VisibleClockCount);
		}

		// Update is called once per frame
		void Update () {
			if (isOriginal) {
				lifeSpan -= Time.deltaTime;

			}

			if (!isOnScreen) {
				if (lifeSpan <= 0) {
					Destroy(gameObject);
				} else if (Time.fixedTime - fellOffAtTime > OffScreenLimit) {
//					var screen = new Vector3(0,Screen.height,0);
//					var world = Camera.main.ScreenToWorldPoint(screen);
//					ResetWithPosition(new Vector3(0,world.y / 2+ collisionBody.bounds.size.magnitude,0));
					ResetWithVelocity(exitVelocity);
					isOnScreen = willBeOnScreen;
				}
			}

		}

		/// <summary>
		/// Gets a value indicating whether this <see cref="RMX.ClockBehaviour"/> will be on screen.
		/// </summary>
		/// <value><c>true</c> if will be true if gravity will pull this object into view within < second; otherwise, <c>false</c>.</value>
		bool willBeOnScreen {
			get {
				return true;
			}
		}

		Vector3 pointOfExit;
		void OnBecameInvisible() {
			isOnScreen = false;
			fellOffAtTime = Time.fixedTime;
			OffScreenLimit = Random.Range(GameController.isFirstPlay ? 5 : 0, MaxTimeOffScreen);
			pointOfExit = transform.position;
//			print ("Exited at point: " + pointOfExit + "with velocity: " + body.velocity);
			exitVelocity = body.velocity;
		}



	
		void OnBecameVisible() {
			isOnScreen = true;
//			visibleClocks++;
//			print ("I AM VISIBLE, one of " + VisibleClockCount);

		}

		Bounds GetScreenSizeInWorld() {
			var cam = Camera.main;
			var bounds = new Bounds ();
			bounds.size = cam.ScreenToWorldPoint(new Vector3(Screen.width,  Screen.height,0));
			bounds.max = cam.ScreenToWorldPoint(new Vector3(Screen.width, Screen.height,0));
			bounds.min = cam.ScreenToWorldPoint (Vector3.zero);
			return bounds;
		}
		public float maxVelocity = 30f;
		public void ResetWithVelocity (Vector2 direction) {
			var bounds = GetScreenSizeInWorld ();
			var v = body.velocity;
			if (v.magnitude > maxVelocity) {
				v = direction.normalized * maxVelocity;
			} else {
				if (Mathf.Abs (v.x) < Mathf.Abs(Physics2D.gravity.x)) {
					pointOfExit.x = 0;
				} 
				if (Mathf.Abs (v.y) < Mathf.Abs(Physics2D.gravity.y)) {
					pointOfExit.y = bounds.min.y - collisionBody.radius * 2;
				}
			}
			body.velocity = v;
//			print ("New position will be: " + -pointOfExit + ", with velocity: " + body.velocity);
			transform.position = -pointOfExit;
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