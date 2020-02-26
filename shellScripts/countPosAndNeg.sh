#!/bin/bash

echo "Enter random number's"
read -a arr

length=${#arr[@]}

#initial value of positive and negative
pos=0
neg=0

for((i=0;i<length;i++))
do

	#checking that it's neg or not
	if((${arr[$i]}<0))
	then
		neg=`expr $[neg+1]`
	else
		pos=`expr $[pos+1]`
	fi
done

echo "Number of Negative number is: " $neg
echo "Number of Positive number is: " $pos

