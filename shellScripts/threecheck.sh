#!/bin/bash

#greatest number among three number

echo "first num:"
read a
echo "2nd Number:"
read b
echo "3rd Number:"
read c

if [ $a -gt $b ]; then
	if [ $a -gt $c ]; then
		echo "$a is greatest"
	else
		echo "$c is greatest"
	
	fi
else
	if [ $b -gt $c ]; then
		echo "$b is greatest"

	else
		echo "$c is greatest"
	
	fi
fi

