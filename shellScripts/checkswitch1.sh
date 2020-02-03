#!/bin/bash

echo "Enter a number to check grade"
read n

m=`expr $n / 5`

case $m in
	16 ) echo "A";;
	17) echo "A+";;
	15 ) echo "A-";;
	14 ) echo "B";;
	13 ) echo "B-";;
	12 | 11 | 10 | 9 | 8 |7|6|5|4|3|2|1) echo "Fail";;
	*) echo "Wrong input"

esac
