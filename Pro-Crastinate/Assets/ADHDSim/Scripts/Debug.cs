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

namespace RMX
{

	public enum Testing {
		Misc, GameCenter, Achievements, Exceptions, GameDataLists, Singletons

	}

	public class Bugger 
	{
		#if DEBUG
		private static bool _willTest = true;
		#else
		private static bool _willTest = false;
		#endif

		public static Dictionary<Testing,bool> features = new Dictionary<Testing, bool>()
		{
			{ Testing.Misc 				, true 	},
			{ Testing.GameCenter		, false },
			{ Testing.Achievements		, false },
			{ Testing.Exceptions		, true  },
			{ Testing.Singletons		, true  },
			{ Testing.GameDataLists		, false }
		};

		public static bool WillTest(Testing featureToTest) {
			return features [featureToTest];
		}

		public static void Log(object log) {
			UnityEngine.Debug.Log (log);
		}

		/// <summary>
		/// Log the specified log and featureToTest.
		/// </summary>
		/// <depricated>
		/// <param name="log">Log.</param>
		/// <param name="featureToTest">Feature to test.</param>
		public static void Log(object log, Testing featureToTest) {
			if (_willTest && features [featureToTest]) {
				UnityEngine.Debug.Log (log);
			}
		}

		public static DebugLog StartLog(Testing featureToTest) {
			log.Start (featureToTest);
			return log;
		}


		public static void TestAll(bool willTest) {
			foreach (KeyValuePair<Testing,bool> entry in features) {
				features[entry.Key] = willTest;
			}
		}

		public static DebugLog log = new DebugLog();


		public class DebugLog {
			public string log = "";

			public Testing feature = Testing.Misc;

			public void Clear() {
				log = "";
			}

			public void Start(Testing feature) {
				this.feature = feature;
				this.log = "";
			}

			public override string ToString() {
				var log = this.log;
				if (this.feature == Testing.Exceptions)
					log = "<color=red>EXCEPTION: </color>" + log;
				Clear ();
				return Bugger.WillTest (this.feature) ? log : null;
			}
		}
	}


}
