using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {

	public enum UserData {
		CurrentSession, CurrentProcrastination, Total
	}
	public class Bonus : MonoBehaviour {

		public UserData data = UserData.CurrentSession;
		public float threshold = 0;
		Rigidbody2D body;
		string key = Key.LastSession;
		// Use this for initialization
		void Start () {
			body = GetComponent<Rigidbody2D> ();
			body.isKinematic = threshold > 0;
			threshold = Random.Range (0, threshold);
			switch (data) {
			case UserData.CurrentSession:
				key = Key.LastSession;
				break;
			case UserData.CurrentProcrastination:
				key = Key.LastProcrastination;
				break;
			case UserData.Total:
				key = Key.Total;
				break;

			}

		}
		
		// Update is called once per frame
		void Update () {
			if (body.isKinematic && PlayerPrefs.GetFloat(key) > threshold) {
				body.isKinematic = false;
			}
		}




	}


}