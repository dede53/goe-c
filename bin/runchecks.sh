#!/bin/bash

if [ ! -d testing ]
	then
  	echo "ERROR: directory \"testing\" not found"
  	exit 1 
fi
djgnu="";
cunit="";
file="";

while getopts ":cdf:" opt; do
  case $opt in
   d)
      djgnu=true
      ;;
   c)
      cunit=true
      ;;
   f) file=$OPTARG
      ;;
   \?)
      echo "Invalid option: -$OPTARG" >&2
      ;;
  esac
done 

if [ -z "$file" ]
then
  echo "usage: $0 [-c] [-d] -f <filename>"
  exit 1
fi

if [ ! -f "$file" ]
then
  echo "ERROR: file \"${file}\" not exists"
  exit 1
fi

cp ${file} testing/.
cd testing
filename="${file%.*}"


if [ ! -z "$cunit" ]
then
	if [ ! -f "${filename}_test.c" ]
	then
		echo "ERROR: \"${filename}_test.c\" not found in \"testing\""
	 	echo "       download and unzip \"exercise_X.zip\" in \"testing\""
		echo "		 If you did, this is not a cunit test. Try \"-d\" for dejagnu test."
		exit 1
	fi
  	echo "** check CUNIT ******************************************" 
  	gcc ${filename}_test.c -o ${filename}_test -std=c11 -lcunit
  	./${filename}_test
fi


if [ ! -z "$djgnu" ]
then
	if [ ! -d test ]
	then
		echo "ERROR: directory \"test\" not found in \"testing\""
	 	echo "       download and unzip \"exercise_X.zip\" in \"testing\""
		echo "		 If you did, this is not a dejagnu test. Try \"-c\" for cunit test."
	 	exit 1 
	fi
	if [ ! -f configure ]
	then
  		echo "ERROR: file \"configure\" not found in \"testing\""
  		echo "       run \"init.sh\" first"
  		exit  
	fi
	echo "** check GCC ********************************************" 
	gcc -Wall -std=c11 $file -o $filename
	echo "** check CLANG ******************************************" 
	clang --analyze $file
	# splint $file
  	echo "** check DJGNU ******************************************" 
  	make
  	make -s check
fi
