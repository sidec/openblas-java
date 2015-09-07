package org.bitbucket.ioplus.openblas;

import org.bitbucket.ioplus.nativeloader.NativeLoader;

import java.io.IOException;

/**
 * Created by przemek on 13/08/15.
 */
public class Lapacke {
    static {
        try {
            Class.forName("org.bitbucket.ioplus.openblas.openblas");

            NativeLoader.load(Lapacke.class);

        } catch (ClassNotFoundException e) {
            e.printStackTrace();

        } catch (IOException e) {
            e.printStackTrace();
        }
    }

    /* native single precision LAPACKE
    *  matrix order is always major row
    * */
    public static native void sgetrf(int m,
                              int n,
                              float[] a,
                              int lda,
                              int[] ipiv);

    public static native void sgetri(int n,
                              float[] a,
                              int lda,
                              int[] ipiv);

    public static native void sdeev(char jobvl,
                                    char jobvr,
                                    int n,
                                    float[] a,
                                    int lda,
                                    float[] wr, // values
                                    float[] wi,
                                    float[] vl,
                                    int ldvl,
                                    float[] vr, // vectors
                                    int ldvr);



    public static native void sgehrd(int n,
                                     int ilo, // 1
                                     int ihi, // n
                                     float[] a, //input/output
                                     int lda, // >= max(1,n)
                                     float[] tau // n-1
    );

    public static native void shseqr(char job,
                                     char compz,
                                     int n,
                                     int ilo,
                                     int ihi,
                                     float[] h, // input
                                     int ldh,
                                     float[] wr,
                                     float[] wi,
                                     float[] z,
                                     int ldz);


}
