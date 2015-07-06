using UnityEngine;
using System.Collections;

namespace RMX {
	public class GoAwayText : MonoBehaviour {

		public static GoAwayText text;

		void Awake () {
			if (text == null) {
				DontDestroyOnLoad (gameObject);
				text = this;
			} else if (text != this) {
				Destroy (gameObject);
			}
		}
		// Use this for initialization
		void Start () {
		
		}
		
		// Update is called once per frame
		void Update () {
		
		}
	}
}