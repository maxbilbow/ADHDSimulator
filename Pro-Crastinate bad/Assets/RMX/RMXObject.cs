using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {

	public interface KeyValueObserver {
		void OnValueForKeyWillChange(string key, object value);
		void OnValueForKeyDidChange(string key, object value);
	}
	public class RMXObject : MonoBehaviour, KeyValueObserver, EventListener {

	 	Dictionary<string, object> values = new Dictionary<string, object> ();
		List<KeyValueObserver> observers = new List<KeyValueObserver> ();

		protected void WillBeginEvent(Event theEvent){
			Notifications.EventWillStart (theEvent);
		}

		protected void DidUpdateEvent(Event theEvent) {
			Notifications.EventWillStart (theEvent);
		}

		protected void DidFinishEvent(Event theEvent){
			Notifications.EventDidEnd (theEvent);
		}

		protected void DidCauseEvent(Event theEvent){
			Notifications.EventDidOccur (theEvent);
		}

		protected void WillBeginEvent(Event theEvent, object info){
			Notifications.EventWillStart (theEvent, info);
		}
		
		protected void DidUpdateEvent(Event theEvent, object info) {
			Notifications.EventWillStart (theEvent, info);
		}
		
		protected void DidFinishEvent(Event theEvent, object info){
			Notifications.EventDidEnd (theEvent, info);
		}

		protected void DidCauseEvent(Event theEvent, object info){
			Notifications.EventDidOccur (theEvent, info);
		}

		protected void WillChangeValueForKey(string key){
			foreach (KeyValueObserver observer in observers) {
				observer.OnValueForKeyWillChange(key, values[key]);
			}
		}
		
		protected void DidChangeValueForKey(string key) {
			foreach (KeyValueObserver observer in observers) {
				observer.OnValueForKeyDidChange(key, values[key]);
			}
		}

		public virtual void setValue(string forKey, object value) {
			if (values[forKey] != value) {
//				DidChangeValueForKey(forKey); ??
				values[forKey] = value;
				DidChangeValueForKey(forKey);
			}
		}

		public object getValue(string forKey) {
			return values [forKey];
		}

		public void AddObserver(KeyValueObserver observer) {
			if (!observers.Contains(observer))
				observers.Add(observer);
		}

		public void RemoveObserver(KeyValueObserver observer) {
			if (observers.Contains(observer))
				observers.Remove(observer);
		}


		public virtual void OnValueForKeyWillChange(string key, object value) {}
		public virtual void OnValueForKeyDidChange (string key, object value) {}

		protected static string[] ListenerMethods = {
			"OnEvent",
			"OnEventDidStart",
			"OnEventDidEnd"
		};

		public virtual void OnEvent(Event theEvent, object args) {}
		
		public virtual void OnEventDidStart(Event theEvent, object args){}
		
		public virtual void OnEventDidEnd(Event theEvent, object args){}
	}
}
