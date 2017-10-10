#! /bin/sh
node=`uname -n`
home_libs=~/libs/${node}

home_sea=${home_libs}/sea

./configure --prefix=${home_sea}

if test -d ${home_sea}; then
    rm -rf ${home_sea}
fi

make install

make distclean
