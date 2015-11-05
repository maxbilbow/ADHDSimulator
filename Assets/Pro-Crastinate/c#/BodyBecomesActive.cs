using UnityEngine;
using System.Collections;
using System.Collections.Generic;


using RMX;  
namespace Procrastinate {


	public class BodyBecomesActive : ABonus<Rigidbody2D,float> {


		public override void OnEventDidStart (System.Enum theEvent, object args)
		{
			if (deactivateOnPause && theEvent.Equals (RMX.Event.PauseSession))
				Deactivate ();
		}
	


		public override void Activate() {
			base.Activate ();
			component.isKinematic = false;
		}

		public override void Deactivate() {
			try {
				component.isKinematic = true;
				base.Deactivate();
			} catch {
				if (Bugger.WillLog(RMXTests.Misc, "Warning: component could not be deactivated."))
					Debug.LogWarning(Bugger.Last);
			}
		}

		public override bool isBonusActive {
			get{
				return !component.isKinematic;
			}
		}

	}


}