/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_orbs_cryptosdk_Address */

#ifndef _Included_com_orbs_cryptosdk_Address
#define _Included_com_orbs_cryptosdk_Address
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_orbs_cryptosdk_Address
 * Method:    init
 * Signature: (Ljava/lang/String;Ljava/lang/String;Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_orbs_cryptosdk_Address_init
  (JNIEnv *, jobject, jstring, jstring, jstring);

/*
 * Class:     com_orbs_cryptosdk_Address
 * Method:    finalize
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_orbs_cryptosdk_Address_finalize
    (JNIEnv *, jobject);

/*
 * Class:     com_orbs_cryptosdk_Address
 * Method:    toString
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_orbs_cryptosdk_Address_toString
  (JNIEnv *, jobject);

/*
 * Class:     com_orbs_cryptosdk_Address
 * Method:    getPublicKey
 * Signature: ()Ljava/lang/String;
 */
JNIEXPORT jstring JNICALL Java_com_orbs_cryptosdk_Address_getPublicKey
    (JNIEnv *, jobject);

#ifdef __cplusplus
}
#endif
#endif
