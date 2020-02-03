#!/bin/bash

makePyramid()
{
 #receiving the passing value by $1 and store in in n
 n=$1

 for((i=1;i<=n;i++))
 do
	
	#for loop for printing necessary space
	for((j=i;j<=n;j++))
	do
		echo -ne " "
	done
	
	#for loop for part 1 & 2 star printing
	for((k=1;k<=2*i-1;k++))
	do
		echo -ne "*"
	done
	
	echo;
 done
}

echo -n  "Enter a row size of pyramid:"
read n

makePyramid $n
