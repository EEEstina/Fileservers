#!/bin/bash

BASE=$(dirname `readlink -f $0`)
cd $BASE
#echo $BASE

DEPS=$BASE/libs
DEPS_SOURCE=$DEPS
DEPS_PREFIX=$DEPS/install
export PATH=${DEPS_PREFIX}/bin:$PATH
mkdir -p ${DEPS_PREFIX} ${DEPS_SOURCE}

if [ ! -d build ]; then
  mkdir -p build
fi

pushd $BASE/build
cmake .. && make && make install
