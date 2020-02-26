#!/bin/bash


echo "Enter a number to get the factorial: "
read n
fac=1

if (( fac < 0 ))
then
	echo "Factorial of a negative number doesn't exist."
else
	
	#4=3*3*1
	for((i=1;i<=n;i++))
	do
		fac=`expr $[fac*i]`
	done
	echo "Factorial of $n is: " $fac
fi
