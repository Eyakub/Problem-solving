#!/bin/bash

echo "Continue"

a=1

while [ $a -le 10 ]
do
	
        #wil check if a = 5 else it will go 16, if 5 thn running	
	if [  $a -eq 5 ];
	then
	a=`expr $a + 1`
	continue
	fi
	echo $a
	a=`expr $a + 1`
done

