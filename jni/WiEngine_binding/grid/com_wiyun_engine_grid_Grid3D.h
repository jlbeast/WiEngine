/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_wiyun_engine_grid_Grid3D */

#ifndef _Included_com_wiyun_engine_grid_Grid3D
#define _Included_com_wiyun_engine_grid_Grid3D
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_wiyun_engine_grid_Grid3D
 * Method:    nativeInit
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_grid_Grid3D_nativeInit
  (JNIEnv *, jobject, jint, jint);

/*
 * Class:     com_wiyun_engine_grid_Grid3D
 * Method:    getVertex
 * Signature: (IILcom/wiyun/engine/types/WYVertex3D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_grid_Grid3D_getVertex
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     com_wiyun_engine_grid_Grid3D
 * Method:    getOriginalVertex
 * Signature: (IILcom/wiyun/engine/types/WYVertex3D;)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_grid_Grid3D_getOriginalVertex
  (JNIEnv *, jobject, jint, jint, jobject);

/*
 * Class:     com_wiyun_engine_grid_Grid3D
 * Method:    setVertex
 * Signature: (IIFFF)V
 */
JNIEXPORT void JNICALL Java_com_wiyun_engine_grid_Grid3D_setVertex
  (JNIEnv *, jobject, jint, jint, jfloat, jfloat, jfloat);

#ifdef __cplusplus
}
#endif
#endif