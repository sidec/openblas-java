#include <stdio.h>
#include <stdlib.h>
#include <math.h>

/* #include <cblas.h> */
#include <lapacke_utils.h>

#include <jni.h>
#include "org_bitbucket_ioplus_openblas_Lapacke.h"


/*
 * Class:     org_bitbucket_ioplus_openblas_Lapacke
 * Method:    sgetrf
 * Signature: (II[FI[I)V
 */
    JNIEXPORT void JNICALL Java_org_bitbucket_ioplus_openblas_Lapacke_sgetrf
    (JNIEnv * env, jclass class,
     jint m, jint n, jfloatArray a, jint lda, jintArray ipiv){

        float *A;
        A = (*env)->GetPrimitiveArrayCritical(env, a, 0);
        int *IPIV;
        IPIV = (*env)->GetPrimitiveArrayCritical(env, ipiv, 0);

        LAPACKE_sgetrf(LAPACK_ROW_MAJOR,
                       m, n, A, lda, IPIV);

        (*env)->ReleasePrimitiveArrayCritical(env, a, A, 0);
        (*env)->ReleasePrimitiveArrayCritical(env, ipiv, IPIV, 0);


    }

/*
 * Class:     org_bitbucket_ioplus_openblas_Lapacke
 * Method:    sgetri
 * Signature: (I[FI[I)V
 */
    JNIEXPORT void JNICALL
    Java_org_bitbucket_ioplus_openblas_Lapacke_sgetri
    (JNIEnv * env, jclass class,
     jint n, jfloatArray a, jint lda, jintArray ipiv){

        float *A;
        A = (*env)->GetPrimitiveArrayCritical(env, a, 0);
        int *IPIV;
        IPIV = (*env)->GetPrimitiveArrayCritical(env, ipiv, 0);

        LAPACKE_sgetri(LAPACK_ROW_MAJOR,
                       n, A, lda, IPIV);

        (*env)->ReleasePrimitiveArrayCritical(env, a, A, 0);
        (*env)->ReleasePrimitiveArrayCritical(env, ipiv, IPIV, 0);

    }



/*
 * Class:     org_bitbucket_ioplus_openblas_Lapacke
 * Method:    sdeev
 * Signature: (CCI[FI[F[F[FI[FI)V
 */
JNIEXPORT void JNICALL Java_org_bitbucket_ioplus_openblas_Lapacke_sdeev
(JNIEnv * env, jclass class,
 jchar jobvl,
 jchar jobvr,
 jint n,
 jfloatArray a,
 jint lda,
 jfloatArray wr,
 jfloatArray wi,
 jfloatArray vl,
 jint ldvl,
 jfloatArray vr,
 jint ldvr){
    /* jni args -> c mapping  */

    float *A;
    float *WR;
    float *WI;
    float *VL;
    float *VR;

    A = (*env)->GetPrimitiveArrayCritical(env, a, 0);
    WR = (*env)->GetPrimitiveArrayCritical(env, wr, 0);
    WI = (*env)->GetPrimitiveArrayCritical(env, wi, 0);
    VL = (*env)->GetPrimitiveArrayCritical(env, vl, 0);
    VR = (*env)->GetPrimitiveArrayCritical(env, vr, 0);

    LAPACKE_sgeev(LAPACK_ROW_MAJOR,
                  jobvl,
                  jobvr,
                  n,
                  A,
                  lda,
                  WR, // values
                  WI,
                  VL,
                  ldvl,
                  VR, // vectors
                  ldvr);

    (*env)->ReleasePrimitiveArrayCritical(env, a, A, 0);
    (*env)->ReleasePrimitiveArrayCritical(env, wr, WR, 0);
    (*env)->ReleasePrimitiveArrayCritical(env, wi, WI, 0);
    (*env)->ReleasePrimitiveArrayCritical(env, vr, VR, 0);
    (*env)->ReleasePrimitiveArrayCritical(env, vl, VL, 0);

}



/*
 * Class:     org_bitbucket_ioplus_openblas_Lapacke
 * Method:    sgehrd
 * Signature: (III[FI[F)V
 */
JNIEXPORT void JNICALL Java_org_bitbucket_ioplus_openblas_Lapacke_sgehrd
(JNIEnv * env, jclass class,
 jint n,
 jint ilo,
 jint ihi,
 jfloatArray a,
 jint lda,
 jfloatArray tau
    ){
    float *A  = (*env)->GetPrimitiveArrayCritical(env, a, NULL);
    float *TAU = (*env)->GetPrimitiveArrayCritical(env, tau, NULL);
    LAPACKE_sgehrd(LAPACK_ROW_MAJOR,n, ilo, ihi, A, lda, TAU);
    (*env)->ReleasePrimitiveArrayCritical(env, a, A, 0);
    (*env)->ReleasePrimitiveArrayCritical(env, tau, TAU, 0);
}

/*
 * Class:     org_bitbucket_ioplus_openblas_Lapacke
 * Method:    shseqr
 * Signature: (CCIII[FI[F[F[FI)V
 */
JNIEXPORT void JNICALL Java_org_bitbucket_ioplus_openblas_Lapacke_shseqr
(JNIEnv * env, jclass class,
 jchar job,
 jchar compz,
 jint n,
 jint ilo,
 jint ihi,
 jfloatArray h,
 jint ldh,
 jfloatArray wr,
 jfloatArray wi,
 jfloatArray z,
 jint ldz){

    float *H = (*env)->GetPrimitiveArrayCritical(env, h, 0);
    float *WR = (*env)->GetPrimitiveArrayCritical(env, wr, 0);
    float *WI = (*env)->GetPrimitiveArrayCritical(env, wi, 0);
    float *Z = (*env)->GetPrimitiveArrayCritical(env, z, 0);

    LAPACKE_shseqr(LAPACK_ROW_MAJOR,
                   job,
                   compz,
                   n,
                   ilo,
                   ihi,
                   H,
                   ldh,
                   WR,
                   WI,
                   Z,
                   ldz);

    (*env)->ReleasePrimitiveArrayCritical(env, h, H, 0);
    (*env)->ReleasePrimitiveArrayCritical(env, wr, WR, 0);
    (*env)->ReleasePrimitiveArrayCritical(env, wi, WI, 0);
    (*env)->ReleasePrimitiveArrayCritical(env, z, Z, 0);


}
