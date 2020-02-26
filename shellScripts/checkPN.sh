#!/bin/bash




echo "Input a number"
read a

value1=`expr $a % 2`


if [ $a -gt 0 ]; then
	{
		echo "NUmber is  positive"
		if [ $value1 -eq 0 ]; then
			echo "Even"
		elif [ $value1 -eq 1 ]; then
			echo "Odd"

		else
			echo "Wrong input"
		fi
	}

elif [ $a -lt 0 ]; then
	echo "Negative"

else
	echo "Error"

fi
