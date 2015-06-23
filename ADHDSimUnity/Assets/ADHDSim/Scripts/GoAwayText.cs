using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;

namespace ADHD {
	public class GoAwayText : RMXGameObject, IPointerClickHandler {

		RMXGameObject objectToReset;
		// Use this for initialization
//		void Start () {
//		
//		}
		
		public void ActivateWithObject(RMXGameObject obj) {
			objectToReset = obj;
			Activate();
		}

		public void OnPointerClick(PointerEventData data) {
			objectToReset.Reset();
			Deactivate();
		}
	}

}