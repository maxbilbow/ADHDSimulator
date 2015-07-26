using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using System;
using RMX;

namespace Procrastinate
{
	public class Wychd : List<string> {}
	public static class DataReader // : RMX.Singletons.ASingleton<DataReader>
	{
		public const float variation = 0.2f;
		public const int csv_time = 2;
		public const int csv_text = 1;
		public const int csv_approved = 3;


		static TextAsset Database {
			get {
				return Singletons.GameController.Database;
			}
		}


		 static float TimeHMSToFloat(string time, char parser) {
			string[] hms = {"","",""};
			int i = 0;
			foreach (char c in time) {
				if (!char.IsDigit(c)) { //c == parser) {
					++i;
				} else {
					//					char.IsDigit
					hms[i] += c;
				}
			}
			float seconds = 0;
			try {
				seconds  = float.Parse (hms [2]);
				seconds += float.Parse (hms [1]) * 60;
				seconds += float.Parse (hms [0]) * 60 * 60;
			} catch (Exception e) {
//				Debug.LogWarning(time + " " + e.Message);
				throw e;
			}
			return seconds;
			
		}
		
		//		private static float Min(float time) {
		//			return time * 0.9f;
		//		}
		//
		//		private static float Max(float time) {
		//			return time + 1.1f;
		//		}
		
		private static bool IsWithinTime(string time, float withinTime) {
			try {
				var seconds = TimeHMSToFloat (time, ':');
				var min = withinTime * (1 - variation) - 10;
				var max = withinTime * (1 + variation) + 10;
				//				Console.Write ("\n" + time + ", seconds: " + seconds + ", ");
				return seconds >= min && seconds < max;
			} catch (Exception e) {
				throw e;
			} 
		}
		
		private static List<List<string>> GetActivities(float inTime) {
//			Debug.Log (GameController.control.database.name);
			var log = string.Format("Getting activities for time: {0:N2} Min", (inTime / 60));
			try {
				var reader = CsvReader.Read (Database);
		
			
				var list = reader.FindAll(match => {
					try {
//						Debug.LogWarning(inTime.ToString());
						if (match[csv_approved].ToUpper() == "TRUE") {
							var result = IsWithinTime(match[csv_time], inTime);
							if (result)
								log += "\n         Accepted: " + match[csv_time] + " " + result;
							else
								log += "\n NOT WITHING TIME: " + match[csv_time];
							return result;
						} else {
							log += "\n       NOT A TIME: " + match[csv_time];
							return false;
						}

					} catch (Exception e) {
						log += "\n FAIL: " + e.Message;
						return false;
					}
				});
				log += " Success!";
				if (Bugger.WillLog (RMXTests.Database, log ))
					Debug.Log (Bugger.Last);// + ": " + match[csv_time]);
				return list;
			} catch  (Exception e) {
				log += "\n FAIL: " + e.Message;
				if (Bugger.WillLog (RMXTests.Database, log ) || Bugger.WillLog (RMXTests.Exceptions, log))
					Debug.Log (Bugger.Last);// + ": " + match[csv_time]);
				throw e;
			}

		}


		public static Wychd GetActivityList(float forTime) {
			var log = string.Format("Getting activities for time: {0:N2} Min", (forTime / 60));
			Wychd list = new Wychd ();
			List<List<string>> activities;
			try {
				activities = GetActivities(forTime);
				foreach (List<string> thing in activities) {
					try {
						log += "\n Added: " + thing[csv_text];
						list.Add (thing [csv_text]);
					} catch (Exception e) {
						log += "\n FAIL: " + e.Message;
					}
				}
				if (Bugger.WillLog (RMXTests.Database, log ))
					Debug.Log (Bugger.Last);// + ": " + match[csv_time]);
				return list;
			}catch (Exception e) {
				log += "\n FAIL: " + e.Message;
				if (Bugger.WillLog (RMXTests.Database, log ) || Bugger.WillLog (RMXTests.Exceptions, log))
					Debug.Log (Bugger.Last);// + ": " + match[csv_time]);
				throw e;
			} 

		}

	}
}