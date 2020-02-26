#!/bin/bash

echo "For loop"

for ((i=1;i<=10;i++))
do
	echo $i
done
echo
echo
#used to get the list of that directory file
echo "Another forloop"
echo
for i in `ls`
do
	echo $i
done
echo
#different for loop
echo "another for loop"
echo
for a in {1..10..2}
do
echo $a
done

