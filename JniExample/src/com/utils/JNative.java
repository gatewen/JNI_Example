package com.utils;

public class JNative
{
	static
	{
		System.loadLibrary("NativeCode");
	}

	
	public static native String Matadd();
	public static native int getUnixTime();

}
 