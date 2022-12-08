#!/bin/bash

echo -n "Enter number here: "
read num
number=$num
rev=0
while [ $number -gt 0 ]
do
n=`expr $number % 10`
rev=$((($rev * 10) + $n))
number=`expr $number / 10`
done

if [ $num -eq $rev ]
then
echo "Number is Palindrome"
else
echo "Number is not Palindrome"
fi
