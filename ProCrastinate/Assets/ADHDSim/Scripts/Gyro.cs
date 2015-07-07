using UnityEngine;
using System.Collections;

namespace RMX {
	public class Gyro : MonoBehaviour {

		void Update () 
		{
			Physics2D.gravity = new Vector2 (Input.acceleration.x, Input.acceleration.y);
		}
	}
}
