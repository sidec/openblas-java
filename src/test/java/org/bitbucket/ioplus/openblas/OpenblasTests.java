package org.bitbucket.ioplus.openblas;


import org.junit.Test;

import java.util.Random;

/**
 * Created by przemek on 13/08/15.
 */
public class OpenblasTests {

    @Test
    public void loadOpenblas() throws ClassNotFoundException {
        Class.forName("org.bitbucket.ioplus.openblas.openblas");
        Class.forName("org.bitbucket.ioplus.openblas.Lapacke");
    }




}
