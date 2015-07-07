using UnityEngine;
using System.Collections;
using System;
using UnityEngine.SocialPlatforms;

namespace RMX {
	public class GameCenter : MonoBehaviour, ISocialPlatform {

		public static GameCenter gameKit;

		void Awake() {
			if (gameKit == null) {
				DontDestroyOnLoad (gameObject);
				gameKit = this;
			} else if (gameKit != this) {
				Destroy (gameObject);
			}
		}
		// Use this for initialization
		void Start () {
		
		}
		
		// Update is called once per frame
		void Update () {
		
		}

		//
		// Properties
		//
		private User _user = new User();
		public ILocalUser localUser
		{
			get {
				return _user;
			}
		}
		
		//
		// Methods
		//
		public void Authenticate (ILocalUser user, Action<bool> callback){

		}
		
		public IAchievement CreateAchievement () {
			return null;
		}
		
		public ILeaderboard CreateLeaderboard () {
			return null;
		}
		
		public bool GetLoading (ILeaderboard board) {
			return false;
		}
		
		public void LoadAchievementDescriptions (Action<IAchievementDescription[]> callback) {
			
		}
		
		public void LoadAchievements (Action<IAchievement[]> callback) {
			
		}
		
		public void LoadFriends (ILocalUser user, Action<bool> callback) {
			
		}
		
		public void LoadScores (ILeaderboard board, Action<bool> callback) {
			
		}
		
		public void LoadScores (string leaderboardID, Action<IScore[]> callback) {
			
		}
		
		public void LoadUsers (string[] userIDs, Action<IUserProfile[]> callback) {
			
		}
		
		public void ReportProgress (string achievementID, double progress, Action<bool> callback) {
			
		}
		
		public void ReportScore (long score, string board, Action<bool> callback) {
			
		}
		
		public void ShowAchievementsUI () {
			
		}
		
		public void ShowLeaderboardUI () {
			
		}
	}
}