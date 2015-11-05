// ------------------------------------------------------------------------------
//  <autogenerated>
//      This code was generated by a tool.
//      Mono Runtime Version: 4.0.30319.1
// 
//      Changes to this file may cause incorrect behavior and will be lost if 
//      the code is regenerated.
//  </autogenerated>
// ------------------------------------------------------------------------------
using UnityEngine;
using System.Collections;
using System.Collections.Generic;

namespace RMX
{
	



	public interface ISingleton: IRMXObject {
//		ISingleton Singleton { get; set; }
		bool Destroyed { get; }
		GameObject gameObject { get; }

	}




	public static class Singletons {


//		static bool _gameControllerInitialized = false;
		public static bool GameControllerInitialized {
			get {
				return _gameController != null;//_gameControllerInitialized;
			}
		}
		public interface IDebugHUD
		{
		}

		static IGameController _gameController;
	 	public static IGameController GameController {
			get{ 
				return _gameController;
			}
		}


		public abstract class ASingleton<T> : RMXObject, ISingleton, EventListener
		where T : RMXObject, EventListener, ISingleton 
		{

			private static T _singleton = null;

			private static bool _isInitialized = false;


			protected virtual bool SetupComplete {
				get{ 
					return true;
				}
			}

			public static bool IsInitialized {
				get {
					return _isInitialized && (_singleton as ASingleton<T>).SetupComplete;
				}
			}



			protected virtual IGameController gameController { 
				get {
					return _gameController;
				}
			}
  	
			/// <summary>
			/// Gets the current singleton as a protected static variable that may be delegated in a subclass.
			/// _current initializes the singlton if not already initialized 
			/// so this should not be called before Start(), especially if the script is attached to a GameObject in the editor.
			/// </summary>
			/// <value>The current GameControllerExample singleton.</value>
			protected static T _current {
				get {
					if (IsInitialized) {
						return _singleton as T;
					} else {
						if (typeof(T) is IGameController)
							throw new System.Exception(typeof(T).Name + "Should never be initialized with static Getter method 'current'");
						if (typeof(T) is IDebugHUD)
							throw new System.Exception("DebugHUD should not be accessed through 'ASingleton.current' as a Singleton");
						return Initialize() as T;
					}
				}
			}


			const string tempName = "324329hrNhfeuwh9";
			private bool _destroyed = false;
			public bool Destroyed {
				get {
					return _destroyed;
				}
			}




			public static T Initialize() {
				if (typeof(T) is IGameController)
					throw new System.Exception(typeof(T).Name + "Should never be initialized with static Getter method 'current'");
				if (IsInitialized) 
					return _singleton;
				else {
					var go = new GameObject(tempName);
					ISingleton aSingleton = go.AddComponent<T> ();
					if (aSingleton == null || (aSingleton as ISingleton).Destroyed) {
						return null;
					}
					aSingleton.gameObject.name = aSingleton.GetType ().Name;
	
					if (!(aSingleton is IGameController) && Singletons.GameControllerInitialized) {
						var parent = Singletons.GameController.gameObject;
						aSingleton.gameObject.transform.SetParent (parent.transform);
					}

					return aSingleton as T;
				} 
			}

		

			private void MainInitCheck() {
				if (this is IGameController) {
					Singletons._gameController = this as IGameController;
					_gameController.Patch();
				}
			 	else if (_gameController == null)
					Debug.LogWarning ("GameController should be initialized before " + this.GetType().Name);
			}

			protected enum Init {
				Continue, DestroyScript, DestroyCompletely
			}

			protected virtual Init WillInitialize {
				get {
					return Init.Continue;
				}
			}
			/// <summary>
			/// Checks whether a singleton already exists. If so, object is destroyed.
			/// Otherwise it checks whether the EventListener methods have been overriden. If so, the object is added to the global EventListeners.
			/// </summary>
			protected override void Awake() {
				var message = "__new__ <color=lightblue>" + this.GetType().Name + "</color>()";
				switch (WillInitialize) {
				case Init.DestroyCompletely:
					Destroy (this);
					Destroy (gameObject);
					_destroyed = true;
					return;
				case Init.DestroyScript:
					Destroy (this);
					_destroyed = true;
					return;
				case Init.Continue:
					if (_singleton == null) {
						DontDestroyOnLoad (gameObject);
						_singleton = this as T;// as T;
						MainInitCheck ();
						_isInitialized = true;
						base.Awake ();
					} else if (_singleton != this) {
						if (gameObject.name == tempName) {// gameObject.name == this.GetType().Name &&
							message += " -- <color=red> DELETING REDUNDANT " + this.GetType ().Name + "</color>()";
							_destroyed = true;
							Destroy (gameObject);
							Destroy (this);
						} else {
							message += " -- <color=orange> DELETING REDUNDANT ASingleton: </color> " + this.GetType ().Name + "</color>()";
							_destroyed = true;
							Destroy (this);
						}
					}

					break;
				}
				if (Bugger.WillLog (RMXTests.Singletons, message))
					Debug.Log (Bugger.Last);

			}

		}
	}
}
