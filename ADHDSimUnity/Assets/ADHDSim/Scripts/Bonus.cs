using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {

	public enum UserData {
		CurrentSession, CurrentProcrastination, Total
	}
	public class Bonus : IBonus<Rigidbody2D,UserData> {


		protected override void ChooseData() {
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
	

		void OnApplicationFocus(bool focus) {
			if (data == UserData.CurrentProcrastination) {
				Deactivate();
			}
		}

		public override void Activate() {
			component.isKinematic = false;
		}

		public override void Deactivate() {
			try {
				component.isKinematic = true;
			} catch {
				print ("Warning: component could not be deactivated.");
			}
		}

		public override bool isBonusActive {
			get{
				return !component.isKinematic;
			}
		}

	}


}