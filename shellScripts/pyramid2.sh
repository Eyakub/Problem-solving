#!/bin/bash

echo "Pyramid"
read x
for ((i=1;i<=x;i++))
do
	for ((j=1;j<=i;j++))
	do
	echo -n $i " "
	done
	echo
done
