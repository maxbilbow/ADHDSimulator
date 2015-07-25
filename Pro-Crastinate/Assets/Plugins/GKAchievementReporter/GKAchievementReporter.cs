﻿using System.Runtime.InteropServices;
using RMX;
namespace UnityEngine.SocialPlatforms {

	/// <summary>
	/// Reporting achievements natively when running Game Center on iOS in order to avoid a bug in the Unity Social API
	/// </summary>
	public class GKAchievementReporter {

		/// <summary>
		/// Reports an achievement natively if running Game Center on iOS. Otherwise using Social.ReportProgress
		/// </summary>
		public static void ReportAchievement(string achievementID, float progress, bool showsCompletionBanner) {
			#if !DEBUG
			if (Social.Active is GameCenter.GameCenterPlatform && Application.platform == RuntimePlatform.IPhonePlayer) {

				// Use native iOS code if running GameCenter on an iOS device
				_ReportAchievement(achievementID, progress, showsCompletionBanner);

			} else {
				// Otherwise trust the Unity Social API

				Social.ReportProgress(achievementID, progress, success => {
					if (!success) {
						var message = achievementID + " Not Found";
						if (Bugger.WillLog(Testing.Exceptions,message) || Bugger.WillLog(Testing.GameCenter,message) )
							Debug.Log(Bugger.Last);
					}
				});

			}
#endif
		}

		[DllImport("__Internal")]
		private static extern void _ReportAchievement(string achievementID, float progress, bool showsCompletionBanner);
	}
}
