using UnityEngine;
using System.Collections;

namespace RMX {
	public class ClockSpawner : ASingleton<ClockSpawner> {

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
		
		// Update is called once per frame
		void Update () {
			if (Input.touchCount > 1 && GameCenter.current.HasAchieved(UserData.AmeteurCrastinator)) {
				ClockBehaviour.New();
				if (!GameCenter.current.HasAchieved(UserData.MakingTime))
					GameCenter.current.UpdateAchievement(UserData.MakingTime,100);
				if (ClockBehaviour.clocks.Count > maxNumberOfClocks) {
					//					GameCenter.UpdateAchievement(UserData.TooMuchTime,100);
					var toDestroy = ClockBehaviour.clocks[1];
					ClockBehaviour.clocks.RemoveAt(1);
					Destroy(toDestroy.gameObject);
				}
			}
		}

		bool firstLoad;
		public void Spawn() {
			if (firstLoad) {
				firstLoad = false;
			} else if (Random.Range(0,100) > 60 /* && paused && !pause */ && GameCenter.current.HasAchieved(UserData.AmeteurCrastinator)) {
				ClockBehaviour.New();
			}
		}
	}
}
