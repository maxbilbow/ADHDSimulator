using UnityEngine;
using System.Collections;

namespace RMX {
	public class Gyro : ABonus<Gyro> {
//		public bool deactivateOnPause = true;



	
		public override void Deactivate() {
			base.Deactivate ();
			Physics.gravity = GameController.control.defaultGravity;
		}
			
	 	void LateUpdate () 
		{
			if (isBonusActive) {
				Physics2D.gravity = new Vector2 (Input.acceleration.x, Input.acceleration.y);
			}
			print (Physics2D.gravity);
		}
	
	}
}
