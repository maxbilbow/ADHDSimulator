using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {
	public class ClockSpawner : ASingleton<ClockSpawner> {

		public List<ClockBehaviour> clocks = new List<ClockBehaviour> ();
		private int _chance = 100;


		void Start() {
			_chance = Random.Range (10,90);
#if !DEBUG
			spawnMode = Chance ? SpawnMode.Inflate : SpawnMode.Multiply;
#endif
		}

		public enum SpawnMode {
			Multiply, Inflate
		}
		public SpawnMode spawnMode = SpawnMode.Inflate;


		public int maxNumberOfClocks {
			get {
				int time = (int) Time.fixedTime;
				return time < gameController.maxNumberOfClocks ? time : gameController.maxNumberOfClocks;
			}
		}
		// Use this for initialization
		protected override void Awake () {
			base.Awake ();
			firstLoad = !SavedData.Get(UserData.NotFirstTime).Bool;
		}

		ClockBehaviour inflatableClock;

		// Update is called once per frame
		void Update () {
			switch (spawnMode) {
			case SpawnMode.Multiply:
				if (Input.touchCount > 1) {
					if (Spawn () && !GameCenter.current.HasAchieved (UserData.MakingTime))
						GameCenter.current.UpdateAchievement (UserData.MakingTime, 100);
					if (clocks.Count > maxNumberOfClocks) {
						if (!GameCenter.current.HasAchieved (UserData.OverTime))
							GameCenter.current.UpdateAchievement (UserData.OverTime, 100);
						var toDestroy = clocks [1];
						//					clocks.RemoveAt(1);
						Destroy (toDestroy.gameObject);
					}
				}
				break;
			case SpawnMode.Inflate:
				if (Input.touchCount == 2) {
					forTouch = 1;
					if (!inflatableClock) {

						inflatableClock = ClockBehaviour.New();
//						inflatableClock.lastScale = inflatableClock.transform.localScale;
						inflatableClock.transform.localScale = new Vector3(0.1f,0.1f,0.1f);
					} else {

						if (inflatableClock.didPop ) {
							inflatableClock = null;
						}
					}

				}
				break;
			}

		}
	
		bool firstLoad;

		bool Chance {
			get {
				return Random.Range(0,100) <= _chance && GameCenter.current.HasAchieved(UserData.AmeteurCrastinator);
			}
		}

		public Vector3 SpawnPoint {
			get {
				Vector3 pos;
				try {
					if (forTouch > 0 && forTouch < Input.touchCount) {
						pos = Input.touches[forTouch].position;
						pos = Camera.current.ScreenPointToRay(new Vector3(pos.x,pos.y,0)).origin;
						return pos;
					}
				} catch (System.Exception e) {
					var log = Bugger.StartLog(Testing.Exceptions,e.Message);
					if (log.isActive)
						Debug.Log(log);
				} finally {
					pos = ClockBehaviour.original.startingPoint;
					pos.y += ClockBehaviour.original.collisionBody.radius * 2;
				}
				return pos;
			}
		}
		int forTouch = 0;
		public bool Spawn() {
			if (firstLoad) {
				firstLoad = false;
				return false;
			} else if (Chance) {
				var count = Input.touchCount;
//				for (int i = 0; i < count; ++i) {
					forTouch = Random.Range(1,count);
					ClockBehaviour.New();
//				}
				return true;
			}
			return false;
		}
	}
}
