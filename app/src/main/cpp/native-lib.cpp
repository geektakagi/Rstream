#include <jni.h>
#include <string>

extern "C"
jstring
Java_aiv_renet_rstream_BaseActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
