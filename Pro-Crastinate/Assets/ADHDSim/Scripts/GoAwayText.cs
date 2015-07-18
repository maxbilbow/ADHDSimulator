using UnityEngine;
using System.Collections;
using UnityEngine.UI;
namespace RMX {
	public class GoAwayText : MonoBehaviour {


		public Text label;

		void Awake () {
			label = GetComponentInChildren<Text> ();
			if (label == null) {
				//TODO: create own label
				throw new System.Exception("No Text Component");
			}
		}
		// Use this for initialization
		void Start () {
			Hide ();
		}
		
		// Update is called once per frame
		void Update () {
			if (ClockBehaviour.VisibleClockCount == 0) {
				Show ();
			} else {
				Hide ();
			}
		}

		public void Show() {
			label.enabled = true;
		}
		public void Hide() {
			label.enabled = false;
		}

	}
}