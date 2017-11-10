#!/bin/bash
cd gcc-build;
../gcc-src/configure --prefix=$(pwd)/../gcc-install --enable-languages=c,c++;
make -j$(getconf _NPROCESSORS_ONLN);
make install;
../gcc-src/configure --prefix=$(pwd)/../gcc-install --disable-bootstrap --enable-languages=c,c++,tiny
make -j$(getconf _NPROCESSORS_ONLN)
make install