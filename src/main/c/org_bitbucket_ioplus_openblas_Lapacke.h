/* DO NOT EDIT THIS FILE - it is machine generated */
#include <jni.h>
/* Header for class org_bitbucket_ioplus_openblas_Lapacke */

#ifndef _Included_org_bitbucket_ioplus_openblas_Lapacke
#define _Included_org_bitbucket_ioplus_openblas_Lapacke
#ifdef __cplusplus
extern "C" {
#endif
/*
 * Class:     org_bitbucket_ioplus_openblas_Lapacke
 * Method:    sgetrf
 * Signature: (II[FI[I)V
 */
JNIEXPORT void JNICALL Java_org_bitbucket_ioplus_openblas_Lapacke_sgetrf
  (JNIEnv *, jclass, jint, jint, jfloatArray, jint, jintArray);

/*
 * Class:     org_bitbucket_ioplus_openblas_Lapacke
 * Method:    sgetri
 * Signature: (I[FI[I)V
 */
JNIEXPORT void JNICALL Java_org_bitbucket_ioplus_openblas_Lapacke_sgetri
  (JNIEnv *, jclass, jint, jfloatArray, jint, jintArray);

/*
 * Class:     org_bitbucket_ioplus_openblas_Lapacke
 * Method:    sdeev
 * Signature: (CCI[FI[F[F[FI[FI)V
 */
JNIEXPORT void JNICALL Java_org_bitbucket_ioplus_openblas_Lapacke_sdeev
  (JNIEnv *, jclass, jchar, jchar, jint, jfloatArray, jint, jfloatArray, jfloatArray, jfloatArray, jint, jfloatArray, jint);


/*
 * Class:     org_bitbucket_ioplus_openblas_Lapacke
 * Method:    sgehrd
 * Signature: (III[FI[I)V
 */
JNIEXPORT void JNICALL Java_org_bitbucket_ioplus_openblas_Lapacke_sgehrd
(JNIEnv *, jclass, jint, jint, jint, jfloatArray, jint, jfloatArray);

/*
 * Class:     org_bitbucket_ioplus_openblas_Lapacke
 * Method:    shseqr
 * Signature: (CCIII[FI[F[F[FI)V
 */
JNIEXPORT void JNICALL Java_org_bitbucket_ioplus_openblas_Lapacke_shseqr
(JNIEnv *, jclass, jchar, jchar, jint, jint, jint, jfloatArray, jint, jfloatArray, jfloatArray, jfloatArray, jint);


#ifdef __cplusplus
}
#endif
#endif
