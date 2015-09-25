/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_cio_CIO */

#ifndef _Included_org_cio_CIO
#define _Included_org_cio_CIO
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_cio_CIO
 * Method:    InitWithDelegate
 * Signature: (Ljava/lang/Object;)Z
 */
JNIEXPORT jboolean JNICALL Java_org_cio_CIO_InitWithDelegate
  (JNIEnv *, jobject, jobject);

/*
 * Class:     org_cio_CIO
 * Method:    Terminat
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_org_cio_CIO_Terminat
  (JNIEnv *, jobject);

/*
 * Class:     org_cio_CIO
 * Method:    OpenIOChannel
 * Signature: ()I
 */
JNIEXPORT jint JNICALL Java_org_cio_CIO_OpenIOChannel
  (JNIEnv *, jobject);

/*
 * Class:     org_cio_CIO
 * Method:    ConnectServiceWhitFD
 * Signature: (ILjava/lang/String;I)Z
 */
JNIEXPORT jboolean JNICALL Java_org_cio_CIO_ConnectServiceWhitFD
  (JNIEnv *, jobject, jint, jstring, jint);

/*
 * Class:     org_cio_CIO
 * Method:    SendDataWithFD
 * Signature: (I[CI)I
 */
JNIEXPORT jint JNICALL Java_org_cio_CIO_SendDataWithFD
  (JNIEnv *, jobject, jint, jbyteArray, jint);

/*
 * Class:     org_cio_CIO
 * Method:    CloseIOChannelWithFD
 * Signature: (I)V
 */
JNIEXPORT void JNICALL Java_org_cio_CIO_CloseIOChannelWithFD
  (JNIEnv *, jobject, jint);

#ifdef __cplusplus
}
#endif
#endif
