using UnityEngine;
using System.Collections;
using System.Collections.Generic;

using RMX; 

namespace Procrastinate {	
	public class Settings : ASettings<Settings> {

		public int MaxNumberOfClocks = 50; 
		public TextAsset _database;

		public override TextAsset Database {
			get {
				return _database;
			}
		}
	
		public float FingerSize = 0.3f;
		public ClockSpawner.SpawnMode ClockSpawnMode;// = ClockSpawner.SpawnMode.Inflate;
		public bool willPauseOnLoad = false;
		public bool newPersonalBest = false;

//		public struct DebugSettings {
//			public bool beta;
//			public bool printToScreen;
//		}
//


		public float updateScoresEvery = 1f;

		public override bool PrintToScreen {
			get {
				return _printToScreen;
			} set {
				_printToScreen = value;
			}
		}
		public bool _printToScreen = true;



	
		public float maxDisplayTime = 5f;

		public override float MaxDisplayTime  {
			get {
				return maxDisplayTime;
			}
		}
	
		/// <summary>
		/// The dev time wasted.
		/// </summary>
		public float _totalDevTimeWastedInHours = 5;
		public float TotalDevTimeWasted {
			get {
				return _totalDevTimeWastedInHours * 60 * 60;
			}
		}

		private int _chance = 50;
		public bool Chance {
			get {
				return Random.Range(0,100) <= _chance;
			}
		}
		public bool ChanceGiven(UserData key) {
			return Chance && GameCenter.HasPlayerAlreadyAchieved (key);
		}


		void Start() {
			_chance = Random.Range (10,90);

#if DEBUG
			if (Settings.current.ClearAchievementsOnLoad) {
				//				Debug.LogWarning("Deleting: " + key);
				//				PlayerPrefs.DeleteKey (key);
				PlayerPrefs.DeleteAll();
			}
#endif
			if (!_database) {
				Debug.LogWarning("database asset not set");
			}
			if (Random.Range(1,10) > 5)
				ClockSpawnMode = ClockSpawner.SpawnMode.Multiply;
		}


		public static bool ShouldDebug(string feature) {
			if (Singletons.SettingsInitialized) {
				var settings = Singletons.Settings as Settings;
				if (feature == Tests.GameDataLists)
					return settings.DebugGameDataLists;
				return false;
			}
			throw new UnityException ("Setting should be initialized by now (Testing: " + feature);

		}

		public override bool IsDebugging(string feature) {
			return ShouldDebug(feature) || base.IsDebugging(feature);
		}
	}
}
