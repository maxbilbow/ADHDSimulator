using UnityEngine;
using System.Collections;

namespace RMX {
	public class Gyro : MonoBehaviour {//ABonus<Gyro> {

		public static Gyro current;

		public static void Start() {
			new GameObject ().AddComponent<Gyro> ();
		}

		void Awake() {
			if (current == null) {
				DontDestroyOnLoad (gameObject);
				current = this;
			} else if (current != this) {
				Destroy (gameObject);
			}
		}

//		public override void Deactivate() {
//			base.Deactivate ();
//			Physics.gravity = GameController.control.defaultGravity;
//		}
			
	 	void LateUpdate () 
		{
//			if (isBonusActive) {
				Physics2D.gravity = new Vector2 (Input.acceleration.x, Input.acceleration.y) * 9.81f;
//			}
//			print (Physics2D.gravity);
		}
	
	}
}
