#!/bin/bash
cd gcc-build;
../gcc-src/configure --prefix=$(pwd)/../gcc-install --enable-languages=c,c++;
make -j$(getconf _NPROCESSORS_ONLN);
make install;
