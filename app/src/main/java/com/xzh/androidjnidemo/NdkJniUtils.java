package com.xzh.androidjnidemo;

/**
 * Created by zhenghangxia on 17-5-27.
 */

public class NdkJniUtils {

    public native String getCLanguageString();

    static {
        System.loadLibrary("demo");   //defaultConfig.ndk.moduleName
    }

}

