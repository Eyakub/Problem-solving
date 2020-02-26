#!/bin/bash

makePyramid()
{
 #here $1 is the parameter you passed with the function
 n=$1;

 #outer loop is for printing number of rows in the pyramid
 for((i=1;i<=n;i++))
 do
	#this loop print spaces required
	for((k=i;k<=n;k++))
	do
		echo -ne " "
	done
	
	#this loop print part2 of the pyramid
	for((j=1;j<=i;j++))
	do
		echo -ne "*"
	done

	#this loop print part 2 of the pyramid
	for((z=1;z<i;z++))
	do
		echo -ne "*";
	done

	#this echo used for printing new line
	echo;
done
}

#change number according to your need
echo "Enter a value of pyramid"
read n
makePyramid $n
