#!/bin/bash

echo "Enter a value to check Leap year or not"
read a

if [ `expr $a % 400` == 0 ]; then
	echo "$a is leap year"

elif [ `expr $a % 100` == 0 ]; then
	echo "$a is leap year"

elif [ `expr $a % 4` == 0 ]; then
	echo "$a is leap year"

else
	echo "$a is not Leap year"

fi
 
