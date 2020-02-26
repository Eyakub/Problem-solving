#!/bin/bash

#function to add two numbers
add()
{
	x=$1
	y=$2
	sum=`expr $x + $y`
	echo -e "Number entered by u are: $x and $y"
	echo "sum of $1 and $2 is $sum "
}

#function of substract two number
sub()
{
	x=$1
	y=$2
	sum=`expr $x - $y`
	echo -e "Number You Entered are: $x and $y"
	echo "Sum of $1 and $2 is $sum "
	
}

#function of multiply two number
mul()
{
	x=$1
	y=$2
	sum=`expr $x \* $y`
	echo -e "Number you entered are: $x and $y"
	echo "Sum of $1 and $2 is $sum "
}

#function of divide into two number
div()
{
	x=$1
	y=$2

	sum`expr $x / $y`
	echo -e "Number you entered are: $x and $y"
	echo "Sum of $1 and $2 is $sum "

}


# main scripti
echo -e  "1.Add\n2.Sub\n3.Mul\n4.Div"

echo "Enter first number"
read first
echo "Enter second number"
read sec

echo -n  "Enter a value to do an operation:"
read n

if [ $n -eq 1 ]; then
	add $first $sec

elif [ $n -eq 2 ]; then
	sub $first $sec

elif [ $n -eq 3 ]; then
	mul $first $sec

elif [ $n -eq 4 ]; then
	div $first $sec

else
	echo "Error"

fi
