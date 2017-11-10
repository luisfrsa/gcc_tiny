#!/bin/bash
../gcc-src/configure --prefix=$(pwd)/../gcc-install --disable-bootstrap --enable-languages=c,c++,tiny
make -j$(getconf _NPROCESSORS_ONLN)
make install