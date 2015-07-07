using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {
	public class Sentences {


		public static List<string> WhatYouCouldHaveDone(float time) {
			var timeInMinutes = time / 60;
			List<string> result = new List<string> ();
			if (timeInMinutes < 0.5) {
				result.Add("done very little else. And I'm glad you did not");
			} else if (timeInMinutes < 1) {
				result.Add("trolled someone on Twitter");
			} else if (timeInMinutes < 1.5) {
				result.Add ("briefly checked for new emails");
			} else if (timeInMinutes < 2) {
				result.Add ("re-heated that cold cup of coffee using the microvave.");
			} else if (timeInMinutes < 4) {
				result.Add ("soft-boiled an egg.");
			} else if (timeInMinutes < 10) {
				result.Add ("hard boilded an egg.");
			} if (timeInMinutes < 12) {
				result.Add ("had a short bath");
			} else {
				result.Add ("had a good hard think about the meaning of it all.");
				result.Add ("taken a good long look at yourself.");
				result.Add ("learned a new Spanish phrase on Duolingo");
				result.Add ("helped a blind person to see with \"Be My Eyes\"");
			}
			return result;
		}
	}

}