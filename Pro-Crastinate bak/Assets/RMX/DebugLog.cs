using UnityEngine;
using System.Collections;

namespace RMX {
public class DebugLog {
	private string log = "";
	
	
	public DebugLog(Testing feature, string message) {
		this.feature = feature;
		this.message = message;
	}
	
	
	public DebugLog(Testing feature) {
		this.feature = feature;
	}
	
	public DebugLog() {
		this.feature = Testing.Misc;
	}
	
	public string message {
		get {
			return log;
		} set {
			log = Bugger.WillTest(this.feature) ? value : "";
		}
	}
	
	public bool Set(Testing feature, string message) {
		if (Settings.current.IsDebugging(feature)) {
			this.feature = feature;
			this.message = message;
			return true;
		}
		return false;
	}
	
	public Testing feature = Testing.Misc;
	
	public void Clear() {
		log = "";
	}
	
	public bool isActive {
		get {
			return Bugger.WillTest(this.feature);
		}
	}
	public void Start(Testing feature) {
		this.feature = feature;
		this.log = "";
	}
	
	private string color {
		get {
			switch (this.feature) {
			case Testing.Exceptions:
				return "red";
			case Testing.GameCenter:
				return "yellow";
			case Testing.Patches:
				return "green";
			default:
				return "blue";
			}
		}
	}
	
	
	
	private string ProcessLog() {
		string header = "<color=" + color + ">" + this.feature + ": </color>\n";
		
		return header + TextFormatter.Format (this.message);
	}
	public override string ToString() {
		string log;// = this.log;
		if (isActive) {
			log = ProcessLog();
			if (!Bugger.IsInitialized)
					Bugger.AddLateLog(feature,message);
			else if (Settings.IsInitialized && Settings.current.printToScreen) 
				Bugger.current.AddToQueue(log);
		} else {
			log = null;
		}
		Clear ();
		return log;
	}
}
}