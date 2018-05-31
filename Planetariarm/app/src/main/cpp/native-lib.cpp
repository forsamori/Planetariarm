#include <jni.h>
#include <string>

extern "C"
JNIEXPORT jstring

JNICALL
Java_com_forsamori_planetariarm_MainActivity_stringFromJNI(
        JNIEnv *env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}


/* JNIEXPORT datatype
 * JNICALL Java_domain_Context_functionName
 * () <- Need to pass in the JNIEnvironment and the returning object
 * Remember to set extern "C" before functions*/
extern "C"
JNIEXPORT jstring

JNICALL
Java_com_forsamori_planetariarm_MainActivity_customHelloWorld(
        JNIEnv *env,
        jobject /* this */) {
    std::string myHello = "Yo, its'chu boy, skinny native!";
    return env->NewStringUTF(myHello.c_str());
}
