/* DO NOT EDIT THIS FILE - it is machine generated */

#include <jni.h>

#ifndef __gnu_java_nio_charset_iconv_IconvEncoder__
#define __gnu_java_nio_charset_iconv_IconvEncoder__

#ifdef __cplusplus
extern "C"
{
#endif

JNIEXPORT void JNICALL Java_gnu_java_nio_charset_iconv_IconvEncoder_openIconv (JNIEnv *env, jobject, jstring);
JNIEXPORT jint JNICALL Java_gnu_java_nio_charset_iconv_IconvEncoder_encode (JNIEnv *env, jobject, jcharArray, jbyteArray, jint, jint, jint, jint);
JNIEXPORT void JNICALL Java_gnu_java_nio_charset_iconv_IconvEncoder_closeIconv (JNIEnv *env, jobject);

#undef java_nio_charset_CharsetEncoder_STATE_RESET
#define java_nio_charset_CharsetEncoder_STATE_RESET 0L
#undef java_nio_charset_CharsetEncoder_STATE_CODING
#define java_nio_charset_CharsetEncoder_STATE_CODING 1L
#undef java_nio_charset_CharsetEncoder_STATE_END
#define java_nio_charset_CharsetEncoder_STATE_END 2L
#undef java_nio_charset_CharsetEncoder_STATE_FLUSHED
#define java_nio_charset_CharsetEncoder_STATE_FLUSHED 3L

#ifdef __cplusplus
}
#endif

#endif /* __gnu_java_nio_charset_iconv_IconvEncoder__ */
