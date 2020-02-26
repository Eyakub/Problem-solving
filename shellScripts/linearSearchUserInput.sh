#!/bin/bash

echo "Don't press enter, input value with a single space every time."

read -a arr

echo "Length of the array: "  ${#arr[@]}

#storing the length of the array
length=${#arr[@]}

#echo "the length is: " $length
#for i in ${arr[@]}
#do
#	echo $i
#done

echo

echo "Enter a value to search: "
read a
flag=0
pos=0

for((i=0;i<length;i++))
do
	if ((${arr[$i]}==$a))
	then
	flag=`expr $[flag+1]`
	
	#storing the position
	pos=$i+1
	break
	fi
done

if (($flag==1))
then
	echo "The current position of the value is: " $[pos]
else
	echo "Not found"
fi


