#!/bin/sh
gcc --shared -fPIC Lapacke.c -L/opt/OpenBLAS -lopenblas -lgfortran -lpthread  -o ../resources/native/Linux/amd64/libLapacke.so
