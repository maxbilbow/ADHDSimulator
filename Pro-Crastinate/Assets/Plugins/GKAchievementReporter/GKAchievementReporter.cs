using System.Runtime.InteropServices;
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

			if (Social.Active is GameCenter.GameCenterPlatform && Application.platform == RuntimePlatform.IPhonePlayer) {
				try {
					// Use native iOS code if running GameCenter on an iOS device
					_ReportAchievement(achievementID, progress, showsCompletionBanner);
				} catch (System.Exception e) {
					if (Bugger.WillLog(RMXTests.Exceptions,e.Message) || Bugger.WillLog(RMXTests.GameCenter,e.Message) )
						Debug.Log(Bugger.Last);
				}

			} else {
				// Otherwise trust the Unity Social API
				try { 
					Social.ReportProgress(achievementID, progress, null );
				} catch (System.Exception e) {
					if (Bugger.WillLog(RMXTests.Exceptions,e.Message) || Bugger.WillLog(RMXTests.GameCenter,e.Message) )
						Debug.Log(Bugger.Last);
				}
//				success => {
//					if (!success) {
//						var message = achievementID + " Not Found";
//						if (Bugger.WillLog(RMXTests.Exceptions,message) || Bugger.WillLog(RMXTests.GameCenter,message) )
//							Debug.Log(Bugger.Last);
//					}
//				});

			}
		}

		[DllImport("__Internal")]
		private static extern void _ReportAchievement(string achievementID, float progress, bool showsCompletionBanner);
	}
}
