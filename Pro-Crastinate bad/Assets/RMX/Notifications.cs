using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {

	public interface EventListener {
		void OnEvent(Event theEvent, object args);
		void OnEventDidStart(Event theEvent, object args);
		void OnEventDidEnd(Event theEvent, object args);
		void SendMessage(string message, SendMessageOptions sendMessageOptions);
		string name { get; }
	}

	public enum EventStatus {
		Active, Completed, Idle, Success, Failure, ForceNewEvent
	}

	public enum Event {
		SingletonInitialization,
		ClockIsAboutToBurst,
		ScreenBecameEmpty,
		SomethingBurst,
		PauseSession, ResumeSession,
		GC_AchievementGained,
		GC_UserAuthentication,
		SpawnMultipleClocks,
		SpawnInflatableClock

	}

	public class Notifications : ASingleton<Notifications> , EventListener {
		static Dictionary<string,EventListener> earlyListeners = new Dictionary<string,EventListener> ();
		Dictionary<string,EventListener> lateListeners;
		static Dictionary<string,EventListener> Listeners {
			get {
				return IsInitialized ? current.lateListeners : earlyListeners;
			}
		}

		static Dictionary<Event,EventStatus> earlyEvents = new Dictionary<Event,EventStatus>();
		Dictionary<Event,EventStatus> events;

		static Dictionary<Event,EventStatus> Events {
			get {
				return IsInitialized ? current.events : earlyEvents;
			}
		}

		bool _setupComplete = false;

		protected override bool SetupComplete {
			get { 
				return _setupComplete;
			}
		}


		void Start() {
//			Debug.LogWarning ("Listeners: " + Listeners.Count);
			lateListeners = earlyListeners;
			earlyListeners = null;
			events = earlyEvents;
			earlyEvents = null;
			_setupComplete = true;
			Debug.Log ("Listeners: " + Listeners.Count);
		}

		public static bool HasListener(EventListener listener) {
			return Listeners.ContainsValue (listener);
		}
		public static void Reset(Event theEvent) {
			Events[theEvent] = EventStatus.Idle;
		}

		public static void AddListener(EventListener listener) {
			Listeners[listener.GetType().Name] = listener;
			if (Bugger.WillLog (Testing.EventCenter, listener.GetType () + " was added to Listeners ("+ Listeners.Count + ")"))
				Debug.Log (Bugger.Last);

		}

		public static EventStatus StatusOf(Event theEvent) {
			return Events.ContainsKey(theEvent) ? Events [theEvent] : EventStatus.Idle;
		}

		public static bool IsIdle(Event theEvent) {
			return StatusOf (theEvent) == EventStatus.Idle;
		}
	
		public static bool IsActive(Event theEvent) {
			return StatusOf (theEvent) == EventStatus.Active;
		}

		public static void EventDidOccur(Event e) {
			EventDidOccur (e, null);
		}

		public static void EventDidOccur(Event theEvent, object o) {
			var listeners = Listeners;
			Events [theEvent] = Events [theEvent] = o is EventStatus ? (EventStatus) o : EventStatus.Completed;
			foreach (KeyValuePair<string, EventListener> listener in listeners) {
				listener.Value.OnEvent(theEvent,o);
			}
		}


		public static bool WasCompleted(Event theEvent) {
			return StatusOf (theEvent) == EventStatus.Completed;
		}

		public static void EventWillStart(Event theEvent) {
			EventWillStart (theEvent, null);
		}

		public static void EventWillStart(Event theEvent, object o) {
			if (!IsActive (theEvent)) {
				Events [theEvent] = o is EventStatus ? (EventStatus) o : EventStatus.Active;
				foreach (KeyValuePair<string, EventListener> listener in Listeners) {
					listener.Value.OnEventDidStart (theEvent, o);
				}
			}
		}
		public static void EventDidEnd(Event theEvent) {
			EventDidEnd (theEvent, null);
		}
		public static void EventDidEnd(Event theEvent, object o) {
			var listeners = Listeners;
			Events [theEvent] = Events [theEvent] = o is EventStatus ? (EventStatus) o : EventStatus.Completed;
			foreach (KeyValuePair<string, EventListener> listener in listeners) {
				listener.Value.OnEventDidEnd(theEvent,o);
			}
		}

		public static void NotifyListeners(string message) {
			foreach (KeyValuePair<string, EventListener> listener in Listeners) {
				listener.Value.SendMessage (message, SendMessageOptions.DontRequireReceiver);
			}
		}

	
		public override void OnEventDidEnd(Event theEvent, object args){
			switch (theEvent) {
			case Event.GC_UserAuthentication:
				if (Bugger.WillLog(Testing.GameCenter, args.ToString()))
				    Debug.Log(Bugger.Last);
				break;

			}
		}
	}






}