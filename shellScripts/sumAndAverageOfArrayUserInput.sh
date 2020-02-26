#!/bin/bash

echo "Don't enter untill You've done with entering value with one space"
echo "Like: 2 3 4 1"

read -a arr

#storing the length of array
length=${#arr[@]}

#initial value of sum
sum=0

for((i=0;i<length;i++))
do
	#storing every array value into a temp variable to add with sum
	temp=${arr[$i]}
	sum=`expr $[sum+temp]`
done

avg=$(echo "$sum / $length" | bc -l)
echo "Sum: " $sum
echo "Average: " $avg
