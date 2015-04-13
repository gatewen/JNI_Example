#include <jni.h>
#include "../../Classes/UtilTools.h"

extern "C"
    {
    jstring Java_com_utils_JNative_Matadd(JNIEnv *env, jobject thiz)
	{
	return env->NewStringUTF("QQQ");
	}

    jint Java_com_utils_JNative_getUnixTime(JNIEnv *env, jobject thiz)
	{

	return (int) UtilTools::GetInstance()->getTomorrowExcessTime();
	}

    }
