using UnityEngine;
using System.Collections;

namespace RMX {
	public abstract class IBonus<TComponent, Enum> : MonoBehaviour
	where TComponent : Component
	where Enum : struct, System.IConvertible {

//		public enum UserData {
//			CurrentSession, CurrentProcrastination, Total
		//		}
			
		public Enum data;
		protected float threshold = 0;
		public float min = 30;
		public float max = 45;
		protected TComponent component;
		public string key = Key.LastSession;
		
		// Use this for initialization
		protected virtual void SetComponent(TComponent component) {
			this.component = component;
		}
		void Start () {
			threshold = min > max ? min : Random.Range (min, max);

			try {
				SetComponent(GetComponent<TComponent> ());
			} catch {
				SetComponent(null);
			} finally {
				if (component == null) {
					print ("Warning: component could not be set at start! Consider overriding SetComponent method.");
				}
			}

			try {
				ChooseData ();
			} catch {
				print ("Warning: ChooseData() not implemented");
			} finally {
				Deactivate ();
			}
		}

		protected abstract void ChooseData ();
		// Update is called once per frame
		protected void Update () {
			if (!isBonusActive && PlayerPrefs.GetFloat (key) > threshold) {
				Activate ();
			} 
		}
		
		public virtual void Activate () {
			gameObject.SetActive (true);
		}
		
		public virtual void Deactivate () {
			gameObject.SetActive (false);
		}
		
		public virtual bool isBonusActive {
			get {
				return isActiveAndEnabled;
			}
		}
			

	}
}