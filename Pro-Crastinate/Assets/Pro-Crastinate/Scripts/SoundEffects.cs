using UnityEngine;
using System.Collections;
using System.Collections.Generic;
using RMX;  
namespace Procrastinate {
	public class SoundEffects : Singletons.ASingleton<SoundEffects> {
		public const string POP = "pop";
		public const string MUSIC = "music";
		public const string SOMETHING = "something";

		public enum Args
		{
			MusicKeepsPlaying
		}

		public Dictionary<string,AudioSource> tracks = new Dictionary<string,AudioSource>();
		// Use this for initialization
		void Start () {
			foreach (AudioSource track in this.GetComponentsInChildren<AudioSource> ()) {
				tracks[track.name.ToLower()] = track;
			}
			tracks [SOMETHING].Play ();
			tracks [SOMETHING].Pause ();

		}
		AudioClip _altMusic;
 
		// Update is called once per frame
		void Update () {
//			if (!tracks [MUSIC].isPlaying) {
//				if (!tracks[SOMETHING].isPlaying)
//					tracks[MUSIC].UnPause();
//			}
		}

		void Play(string name) {
			var track = current.tracks [name.ToLower ()];
			if (!track.isPlaying) 
				track.Play ();
		}

		void Play(string name, ulong delay) {
			current.tracks [name.ToLower ()].Play (delay);
		}

		public override void OnEventDidStart(System.Enum theEvent, object info) {
			if (theEvent.Equals(Event.ClockIsAboutToBurst))
				tracks ["poppy1"].Play ();
			else if (theEvent.Equals(RMX.Event.PauseSession))
				if (info == null || (Args) info != Args.MusicKeepsPlaying)
					tracks["music"].Pause();
		}

		public override void OnEvent(System.Enum theEvent, object info) {
			if (theEvent.Equals(Event.SomethingBurst))
				Play (POP);

//#if !DEBUG
			if (theEvent.Equals (RMX.Event.GC_AchievementGained)) 
				SwitchMainTrack(true);	 
//#endif
		}

		void SwitchMainTrack(bool force = false) {
			if (GameCenter.HasPlayerAlreadyAchieved(UserData.ach_ameteur_crastinator) && OneIn10 || force){
				tracks[MUSIC].Pause();
				tracks [SOMETHING].UnPause ();
			} else {
				tracks[MUSIC].UnPause();
				tracks [SOMETHING].Pause ();
			}
		}
		public override void OnEventDidEnd(System.Enum theEvent, object info) {
			if (theEvent.Equals (Event.ClockIsAboutToBurst))
				tracks ["poppy2"].PlayDelayed (1);
			else if (theEvent.Equals (RMX.Event.ResumeSession)) {
				SwitchMainTrack();
			}
		}


	}
}