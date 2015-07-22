using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {

	public interface EventListener {
		void OnEvent(Event e, object o);
		void OnEventDidStart(Event e, object o);
		void OnEventDidEnd(Event e, object o);
		void SendMessage(string message, SendMessageOptions sendMessageOptions);
		string name { get; }
	}

	public enum EventStatus {
		Active, Completed, Idle
	}

	public enum Event {
		SingletonInitialization,
		ClockIsAboutToBurst,
		ScreenBecameEmpty,
		SomethingBurst,
		SessionPaused,
		AchievementGained

	}

	public class Notifications : ASingleton<Notifications> {
		static Dictionary<string,EventListener> earlyListeners = new Dictionary<string,EventListener> ();
		Dictionary<string,EventListener> eventListeners;
		static Dictionary<string,EventListener> Listeners {
			get {
				return IsInitialized ? current.eventListeners : earlyListeners;
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
			eventListeners = earlyListeners;
			earlyListeners = null;
			events = earlyEvents;
			earlyEvents = null;
			_setupComplete = true;
		}

		public static void AddListener(EventListener listener) {
			Listeners[listener.name]= listener;
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
			Events [theEvent] = EventStatus.Completed;
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
				var listeners = Listeners;
				Events [theEvent] = EventStatus.Active;
				foreach (KeyValuePair<string, EventListener> listener in listeners) {
					listener.Value.OnEventDidStart (theEvent, o);
				}
			}
		}
		public static void EventDidEnd(Event theEvent) {
				EventDidEnd (theEvent, null);
		}
		public static void EventDidEnd(Event theEvent, object o) {
			var listeners = Listeners;
			Events [theEvent] = EventStatus.Completed;
			foreach (KeyValuePair<string, EventListener> listener in listeners) {
				listener.Value.OnEventDidEnd(theEvent,o);
			}
		}

		public static void NotifyListeners(string message) {
			var listeners = Listeners;
			foreach (KeyValuePair<string, EventListener> listener in listeners) {
				listener.Value.SendMessage (message, SendMessageOptions.DontRequireReceiver);
			}
		}
	}






}