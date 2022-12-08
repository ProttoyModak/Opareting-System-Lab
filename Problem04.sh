#!/bin/bash

echo -n "Input a number here: "
read num

if [ `expr $num % 2` -eq 0 ]
then
echo "This is a Even number"

else
echo "This is a Odd number"
fi
