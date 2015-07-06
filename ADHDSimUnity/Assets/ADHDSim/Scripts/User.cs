using UnityEngine;
using System.Collections;
using UnityEngine.SocialPlatforms;

namespace RMX {
	public class User : MonoBehaviour , ILocalUser{

		// Use this for initialization
		void Start () {
		
		}
		
		// Update is called once per frame
		void Update () {
		
		}

		public string id {
			get {
				return "";
			}
		}
		
		public Texture2D image {
			get {
				return null;
			}
		}
		
		public bool isFriend {
			get {
				return false;
			}
		}
		
		public UserState state {
			get {
				return UserState.Playing;
			}
		}
		
		public string userName {
			get {
				return "";
			}
		}
		
		public bool authenticated {
			get {
				return false;
			}
		}
		
		public IUserProfile[] friends {
			get {
				return null;
			}
		}
		
		public bool underage {
			get {
				return false;
			}
		}
		
		
		public void Authenticate (System.Action<bool> callback){
			
		}
		
		public void LoadFriends (System.Action<bool> callback){
			
		}
	}
}
