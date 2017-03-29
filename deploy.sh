#! /bin/sh

home_libs=~/libs

home_sea=${home_libs}/sea

./configure --prefix=${home_sea}

if test -d ${home_sea}; then
    rm -rf ${home_sea}
fi

make install

make distclean
