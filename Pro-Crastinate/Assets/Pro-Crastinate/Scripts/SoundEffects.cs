using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {
	public class SoundEffects : ASingleton<SoundEffects>, EventListener {
		public const string POP = "pop";

		public Dictionary<string,AudioSource> tracks = new Dictionary<string,AudioSource>();
		// Use this for initialization
		void Start () {
			foreach (AudioSource track in this.GetComponentsInChildren<AudioSource> ()) {
				tracks[track.name.ToLower()] = track;
			}

		}

		// Update is called once per frame
		void Update () {
		
		}

		public void Play(string name) {
			var track = current.tracks [name.ToLower ()];
			if (!track.isPlaying) 
				track.Play ();
		}

		public void Play(string name, ulong delay) {
			current.tracks [name.ToLower ()].Play (delay);
		}

		public void OnEventDidStart(Event theEvent, object info) {
			switch (theEvent) {
			case Event.ClockIsAboutToBurst:
				tracks ["poppy1"].Play ();
				break;
			default:
				return;
			}
			if (Bugger.WillLog (Testing.EventCenter, theEvent.ToString() + " DidStart!"))
				Debug.Log (Bugger.Last);
		}

		public void OnEvent(Event theEvent, object info) {
			switch (theEvent) {
			case Event.SomethingBurst:
				Play (POP);
				break;
			default:
				return;
			}
			if (Bugger.WillLog (Testing.EventCenter, theEvent.ToString() + " OnEvent!"))
				Debug.Log (Bugger.Last);
		}

		public void OnEventDidEnd(Event theEvent, object info) {
			switch (theEvent) {
			case Event.ClockIsAboutToBurst:
				tracks ["poppy2"].PlayDelayed (1);
				break;
			default:
				return;
			}
			if (Bugger.WillLog (Testing.EventCenter, theEvent.ToString() + " DidEnd!"))
				Debug.Log (Bugger.Last);
		}


	}
}