#!/bin/bash

echo -n "Enter a number to check prime or not: "
read n
i=2

while [ $i -lt $n ]
do
	if [ `expr $n % $i` -eq 0 ]
	then
		echo "$n is not a prime number"
		echo "Cause it's divisible by $i"
		exit
	fi
	
	i=`expr $i+1`
done

echo "$n is a Prime number."
