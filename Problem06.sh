#!/bin/bash

fact=1

echo -n "Enter a number here: "
read num

for(( i=1; i<=num; i++ ))
do
fact=`expr $fact \* $num`
done

echo "Factorial: $fact"
