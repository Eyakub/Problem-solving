#!/bin/bash


i="y"
while [ $i == "y" ]
do
sum=0
echo "Enter a value"
read n
m=2
	echo "Number series"
	while [ $m -le $n ]
	do

	echo "$m"

	sum=`expr $sum + $m`

	m=`expr $m + 2`

	done

	echo "Result:  $sum"

echo "wanna continue?? press y"
read i
if [ $i != "y" ]
then
	exit
fi

done
