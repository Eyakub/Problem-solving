#!/bin/bash

#we'll be searching from this array a value
array=(1 2 3 4 5)

#this flag is to check the desire value is found or not
flag=0

#this var is used for taking the position of the desire value
pos=0


echo "Enter a value to search: "
read a

#we know the array size to i<5
for((i=0;i<5;i++))
do
	#checking if the entered value matched or not	
	if ((${array[$i]}==$a))
	then
	
	#if matched change the flag 0 to 1
	flag=`expr $[flag+1]`

	#storing the position
	pos=$i+1
	break
	fi
done

if (($flag==1))
then
	printf "The current position of the value is: %d\n" $[pos]
else
	echo "Not found"
fi
