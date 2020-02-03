#!/bin/bash

echo "Break use"

a=1
while [ $a -le 10 ]
do
	
	echo $a
	a=`expr $a + 1`
	if [ $a -eq 5 ]
	then
	break
	fi
	#a=`expr $a + 1`
done
