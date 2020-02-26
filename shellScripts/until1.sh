#!/bin/bash

echo "Untill loop"
i=1
until [ $i -gt 10 ]
do
	echo $i
	i=`expr $i + 1`
done

echo "Another loop"
a=0
until [ ! $a -lt 10 ]
do
	echo $a
	a=`expr $a + 1`
done
