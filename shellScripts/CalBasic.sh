#i/bin/bash

clear

echo -e "\t\t\tBasic Calculator"
sum=0
i="y"

read -p "Enter first no: " n1
read -p "Enter second no: " n2


while [ $i = "y" ]
do

echo -e "1.Addition\n2.Subtraction\n3.Multiply\n4.Divide"

read ch
case $ch in
1) sum=`expr $n1+$n2 |bc`
echo "Sum ="$sum;;

2) sum=`expr $n1-$n2 |bc`
echo "Subtraction ="$sum;;

3) sum=`expr $n1\*$n2 |bc`
echo "Multiply ="$sum;;

4) sum=`expr $n1/$n2 |bc`
echo "Division ="$sum;;

*) echo "Invalid Choice";;

esac

echo "Do you want to continue?"
read i
if [ $i != "y" ]
then
	 exit
fi

done
