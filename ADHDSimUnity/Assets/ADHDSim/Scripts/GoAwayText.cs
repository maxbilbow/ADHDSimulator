using UnityEngine;
using System.Collections;
using UnityEngine.UI;
namespace RMX {
	public class GoAwayText : MonoBehaviour {

		public static GoAwayText text;
		public Text label;

		void Awake () {
			if (text == null) {
				DontDestroyOnLoad (gameObject);
				text = this;
			} else if (text != this) {
				Destroy (gameObject);
			}
			label = this.GetComponentInChildren<Text> ();
		}
		// Use this for initialization
		void Start () {
			Hide ();
		}
		
		// Update is called once per frame
		void Update () {

		}

		public static void Show() {
			text.label.enabled = true;
		}
		public static void Hide() {
			text.label.enabled = false;
		}
	}
}