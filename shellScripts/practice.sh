#!/bin/bash

echo "It's a practice file"
read a;

for((i=1;i<=a;i++))
do
	for((j=1;j<=i;j++))
	do
		echo " "
	done

	for((j=1;j<=i;j++))
	do
		echo "*"
	done
	echo
done
