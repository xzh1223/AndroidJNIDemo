//
// Created by zhenghangxia on 17-5-27.
//

#include "com_xzh_androidjnidemo_NdkJniUtils.h"

JNIEXPORT jstring JNICALL Java_com_xzh_androidjnidemo_NdkJniUtils_getCLanguageString(JNIEnv *env,jobject thiz) {

return (*env)->NewStringUTF(env, "I`m Str !");


}