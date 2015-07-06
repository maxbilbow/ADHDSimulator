using UnityEngine;
using System.Collections;
using UnityEngine.EventSystems;

namespace RMX {
	public class GoAwayText : RMXGameObject, IPointerClickHandler {

		MonoBehaviour objectToReset;
		// Use this for initialization
//		void Start () {
//		
//		}
		
		public void ActivateWithObject(MonoBehaviour obj) {
			objectToReset = obj;
			Activate();
		}

		public void OnPointerClick(PointerEventData data) {
			objectToReset.SendMessage("Reset");
			Deactivate();
		}
	}

}