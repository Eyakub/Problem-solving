#!/bin/bash

echo "Star printing"

i=5

read n

for ((j=1;j<=n;j++))
do
	for ((k=1;k<=i;k++))
	do
		echo -n  "* "
	done
	echo
done

