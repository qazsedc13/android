#include <jni.h>
#include <string>

extern "C"
jstring
Java_ru_qazsedc13_p0031_1firstproject_MainActivity_stringFromJNI(
        JNIEnv* env,
        jobject /* this */) {
    std::string hello = "Hello from C++";
    return env->NewStringUTF(hello.c_str());
}
