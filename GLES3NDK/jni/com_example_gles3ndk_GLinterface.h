/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class com_example_gles3ndk_GLinterface */

#ifndef _Included_com_example_gles3ndk_GLinterface
#define _Included_com_example_gles3ndk_GLinterface
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     com_example_gles3ndk_GLinterface
 * Method:    onDrawFrame
 * Signature: ()V
 */
JNIEXPORT void JNICALL Java_com_example_gles3ndk_GLinterface_onDrawFrame
  (JNIEnv *, jclass);

/*
 * Class:     com_example_gles3ndk_GLinterface
 * Method:    onSurfaceChanged
 * Signature: (II)V
 */
JNIEXPORT void JNICALL Java_com_example_gles3ndk_GLinterface_onSurfaceChanged
  (JNIEnv *, jclass, jint, jint);

/*
 * Class:     com_example_gles3ndk_GLinterface
 * Method:    onSurfaceCreated
 * Signature: (Ljavax/microedition/khronos/egl/EGLConfig;)V
 */
JNIEXPORT void JNICALL Java_com_example_gles3ndk_GLinterface_onSurfaceCreated
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_example_gles3ndk_GLinterface
 * Method:    initializeAssetManager
 * Signature: (Landroid/content/res/AssetManager;)V
 */
JNIEXPORT void JNICALL Java_com_example_gles3ndk_GLinterface_initializeAssetManager
  (JNIEnv *, jclass, jobject);

/*
 * Class:     com_example_gles3ndk_GLinterface
 * Method:    setInitName
 * Signature: (Ljava/lang/String;)V
 */
JNIEXPORT void JNICALL Java_com_example_gles3ndk_GLinterface_setInitName
  (JNIEnv *, jclass, jstring);

/*
 * Class:     com_example_gles3ndk_GLinterface
 * Method:    setBitmap
 * Signature: (Landroid/graphics/Bitmap;)V
 */
JNIEXPORT void JNICALL Java_com_example_gles3ndk_GLinterface_setBitmap
  (JNIEnv *, jclass, jobject);

JNIEXPORT void JNICALL Java_com_example_gles3ndk_GLinterface_setSurface
  (JNIEnv *, jclass, jobject);

#ifdef __cplusplus
}
#endif
#endif
