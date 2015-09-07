package org.bitbucket.ioplus.openblas;

import org.bitbucket.ioplus.nativeloader.NativeLoader;

import java.io.IOException;

/**
 * Created by przemek on 13/08/15.
 */
public class openblas {

    static {
        try {
            NativeLoader.load(openblas.class);
        } catch (IOException e) {
            System.out.println("openblas shared library not loaded.\nExiting...");
            System.exit(0);
        }
    }

}
