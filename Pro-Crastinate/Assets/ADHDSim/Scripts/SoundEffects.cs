using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX {
	public class SoundEffects : ASingleton<SoundEffects> {
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

		public static void Play(string name) {
			var track = current.tracks [name.ToLower ()];
			if (!track.isPlaying) 
				track.Play ();
		}

		public static void Play(string name, ulong delay) {
			current.tracks [name.ToLower ()].Play (delay);
		}

	}
}