#!/bin/bash

echo "Enter a nubmer"
read n
m=`expr $n / 10`

case "$m" in
	8 | 9 | 10  )
		 echo "A+" ;;
	7  ) echo "A" ;;
	6) echo "B" ;;
	5  ) echo "fail" ;;
	* ) echo "wrong input"

esac
