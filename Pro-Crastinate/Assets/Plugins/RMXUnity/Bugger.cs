// ------------------------------------------------------------------------------
//  <autogenerated>
//      This code was generated by a tool.
//      Mono Runtime Version: 4.0.30319.1
// 
//      Changes to this file may cause incorrect behavior and will be lost if 
//      the code is regenerated.
//  </autogenerated>
// ------------------------------------------------------------------------------
using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using System.Runtime;
using System.Runtime.CompilerServices;

namespace RMX
{

//	public class Testing {
//		
//		public static string Misc = "Misc";
//		public static string GameCenter = "GameCenter";
//		public static string Achievements = "Achievements";
//		public static string Exceptions = "Exceptions";
//		
//		public static string Singletons = "Singletons";
//		public static string Patches = "Patches";
//		public static string Database = "Database";
//		public static string EventCenter = "EventCenter";
//		public static string EarlyInits = "DebugInits";
//	}

	public enum RMXTests {
		
		Misc, GameCenter, Achievements, Exceptions, Singletons ,Patches,Database ,EventCenter, EarlyInits
	}

	public static class Bugger //: Singletons.ASingleton<Bugger>
	{
		struct Log {
			public Log(System.Enum feature, string message) {
				this.feature = feature;
				this.message = message;
			}
			public System.Enum feature;
			public string message;

			public bool isEmpty {
				get {
					return this.message == "" || this.message == null;
				}
			}

			public bool isActive {
				get {
					return false;
				}
			}

			private string color {
				get {
					if (this.feature.Equals(RMXTests.Exceptions))
						return "red";
					else if (this.feature.Equals( RMXTests.GameCenter))
						return "yellow";
					else if (this.feature.Equals( RMXTests.Patches))
						return "green";
					else
						return "blue";
				}	
			}
			
			
		
			public override string ToString ()
			{
				string header = "<color=" + color + ">" + this.feature + ": </color>\n";
				var result = TextFormatter.Format( header + this.message);
				if (Singletons.GameControllerInitialized && Singletons.GameController.DebugHUD)
					Bugger.Queue.Add(result);
				return result;
			}
		}

		public static List<string> Queue = new List<string>();
		private static List<Log> _lateLogs = new List<Log> ();
	
//		bool _setupComplete = false;
//		protected override bool SetupComplete {
//			get {
//				return _setupComplete;
//			}
//		}


//		void Start() {
//			if (!Singletons.SettingsInitialized)
//				Debug.LogError ("Setting MUST be initialized before Bugger");
//			_setupComplete = true;
//
//			if (Singletons.Settings.IsDebugging(Testing.EarlyInits))
//				foreach (Log log in _lateLogs) {
//					try {
//						if (settings.IsDebugging(log.feature)) {
//							var message = TextFormatter.Format(  ": _LATE_ " + log.message);
//							Debug.Log(new Log(log.feature, message));
//						}
//					} catch (Exception e) {
//						Debug.LogWarning(e.Message);
//					}
//				}
//			_lateLogs.Clear ();
//			_lateLogs = null;
//
//		}

		static void LateLogs() {
			if (Singletons.Settings.IsDebugging(RMXTests.EarlyInits))
			foreach (Log log in _lateLogs) {
				try {
					if (Singletons.Settings.IsDebugging(log.feature)) {
						var message = TextFormatter.Format(  ": _LATE_ " + log.message);
						Debug.Log(new Log(log.feature, message));
					}
				} catch (Exception e) {
					Debug.LogWarning(e.Message);
				}
			}
			_lateLogs.Clear ();
			_lateLogs = null;
		}




		static Log _log = new Log(RMXTests.Exceptions,"");
		public static string Last {
			get {
				if (!_log.isEmpty)
						return _log.ToString();
					else
						throw new NullReferenceException ("_log should not be null!");
			}
		}

		 static void AddLateLog(System.Enum feature, string message) {
			if (_lateLogs == null)
				throw new Exception ("Late Log Was Added too Late! - " + feature + "\n " + message);
			else		
				_lateLogs.Add (new Log (feature, message));

		}

//		static Log StartNewLog(string feature) {
//			return StartNewLog (feature, "");
//		}
//
//	 	static Log StartNewLog(string feature, string message) {
//			if (IsInitialized) {
//				return new Log (feature, message);
//			} else
//				throw new Exception ("Bugger must be initialized before StartNewLog(string feature, string message). Log is: \n" + feature + ": " + message);
//
//		}
	
		private static string Stack(string message, int skip = 2) {
			var sf = new System.Diagnostics.StackTrace(skip).GetFrame(0);
			var file = sf.GetFileName(); var member = sf.GetMethod().Name; var line = sf.GetFileLineNumber();
			return message + string.Format("\n<color=red> => {0}_{1}, line: {2} </color>", file, member, line);
		}

		public static bool WillLog(System.Enum feature, string message) {
			message = Stack (message);
			if (Singletons.Settings != null) {
				if (Singletons.Settings.IsDebugging (feature)) {
					_log = new Log (feature, message);
					return true;
				} else {
					return false;
				}
			} else 
				AddLateLog (feature, message);
			return false;
		}




		private static bool timesUp {
			get{ 
				return Singletons.Settings != null && Singletons.Settings.DebugHUD && Queue.Count > 0 && Time.fixedTime - _startedAt > Singletons.Settings.MaxDisplayTime;
			}
		}

		private static int timeRemaining {
			get {
				return Singletons.Settings != null ? (int) (Singletons.Settings.MaxDisplayTime - (Time.fixedTime - _startedAt)) : 1;
			}
		}



		private static float _startedAt = 0;

		static void AddToQueue(string log) {
			if (Queue.Count == 0)
				_startedAt = Time.fixedTime;
			if (!Queue.Exists( val =>  {
				return val == log;
			}))
				Queue.Add (log);
		}

		public static void Initialize() {
			HUD.Initialize ();
		}

		class HUD : Singletons.ASingleton<HUD> {

			void Start() {
				if (Singletons.GameController.BuildForRelease) {
					NotificationCenter.RemoveListener(this);
					Destroy (gameObject);
				}
			}

			void Update() {
				if (timesUp) {
					Queue.RemoveAt(0);
					_startedAt = Time.fixedTime;
				}
			}

			void OnGUI () {
				if (Singletons.Settings != null && Singletons.Settings.DebugHUD && Queue.Count > 0) {
					var text = timeRemaining + " – " + Queue[0];
					GUIStyle style = new GUIStyle ();
	//				style.fontSize = 50;
					style.richText = true;
					style.wordWrap = true;
					style.alignment = TextAnchor.LowerLeft;
					style.padding.left = style.padding.right = style.padding.top = style.padding.bottom = 20;
	//				style.border
					GUI.Label (new Rect (0, 0, Screen.width, Screen.height), Time.timeScale == 0 ? text : "<color=white>" + text + "</color>", style);
				}
			}
		}

		public abstract class DebugHUD : Singletons.ASingleton<DebugHUD> , Singletons.IDebugHUD {
			public GameObject showButton;
			public GameObject hideButton;
			
			
			// Use this for initialization
			void Start () {
				if (Singletons.GameController.BuildForRelease) {
					NotificationCenter.RemoveListener(this);
					Destroy(gameObject);
					return;
				}
				Hide ();
				if (!Singletons.GameController.DebugHUD) {
					showButton.SetActive(false);
				}
			}
			
			bool _show = false;
			public void Show() {
				_show = true;
				showButton.SetActive (false);
				hideButton.SetActive (true);
				//			debugPanel.transform.position = new Vector3 (-slideX, 0, 0);
				//			info.text = "Width: " + Camera.main.pixelWidth.ToString();
			}
			
			public void Hide() {
				_show = false;
				showButton.SetActive (true);
				hideButton.SetActive (false);
				//			debugPanel.transform.position = new Vector3 (slideX, 0, 0);
				//			info.text = "Width: " + Camera.main.pixelWidth.ToString();
			}


			protected abstract string DebugData { get; }
			
			// Update is called once per frame
			void OnGUI() {
				if (_show) {
					GUIStyle style = new GUIStyle ();
					//				
					style.richText = true;
					style.wordWrap = true;
					style.alignment = TextAnchor.UpperRight;
					style.padding.left = style.padding.right = style.padding.top = style.padding.bottom = 20;
					//				style.border
					GUI.Label (new Rect (0, 0, Screen.width, Screen.height), TextFormatter.Format(DebugData,Time.timeScale == 0 ? "black" : "white"), style);
					
				}
			}

		}
	}


}

