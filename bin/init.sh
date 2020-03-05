#!/bin/bash
if [ ! -d testing ]
then
  echo "ERROR: directory \"testing\" not found"
  exit 1 
fi
if [ ! -d testing/test ]
then
  echo "ERROR: directory \"test\" not found in \"testing\""
  echo "       download and unzip \"exercise_X.zip\" in \"testing\""
  exit 1 
fi
cd testing
aclocal
autoheader
autoconf
automake --add-missing --include-deps --foreign
./configure
