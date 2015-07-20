using UnityEngine;
using System.Collections;

namespace RMX {
	public class Settings : ASingleton<Settings> {

		public int MaxNumberOfClocks = 50; 
		public TextAsset Database;
		public float FingerSize = 0.3f;
		public ClockSpawner.SpawnMode ClockSpawnMode;// = ClockSpawner.SpawnMode.Inflate;
		public bool willPauseOnLoad = false;
		public bool newPersonalBest = false;
		#if UNITY_ANDROID
		public bool beta = false;
		public bool printToScreen = false;
		#else
		public bool beta = true;
		public bool printToScreen = true;
		#endif
		public struct DebugSettings {
			public bool beta;
			public bool printToScreen;
		}

		public DebugSettings debugSettings;

//		public DebugSettings DebugSettings = new DebugSettings (true, true);
		public float maxDisplayTime = 5;
		
		/// <summary>
		/// The dev time wasted.
		/// </summary>
		public float TotalDevTimeWasted = 5 * 60 * 60;

		void Start() {
			if (!Database) {
				Debug.LogWarning("database asset not set");
			}
			if (Random.Range(1,10) > 5)
				ClockSpawnMode = ClockSpawner.SpawnMode.Multiply;
		}


//		const string tempName = "324329hrNhfeuwh9";
//		public static T CreateSingleton<T>() where T : ASingleton<T>
//		{
//			if (FindObjectOfType(T)) {// T.GetSingleton() != null) {
//				return T.current;
//			} else if (GameController.IsInitialized || typeof(T) == typeof(GameController)) {
//				var aSingleton = new GameObject (tempName).AddComponent<T> ();
//				if ((aSingleton as ASingleton<T>).Destroyed) {
//					return null;
//				}
//				aSingleton.gameObject.name = aSingleton.GetType ().Name;
//				if (!(aSingleton is GameController)) {
//					var parent = GameController.current.gameObject;//GameObject.Find(rootName);
//					aSingleton.transform.SetParent (parent.transform);
//				}
//				return aSingleton;
//			} else {
//				Debug.LogError("Gamecontroller should happen before this...");
//				GameController.lateInits.Add(Initialize);
//				return null;
//			}
//		}
	}
}
