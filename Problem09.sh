#!/bin/bash

echo -n "Enter the number: "
read num
c=62
d=20
echo -n "22+"
echo -n "42+62"

for ((i=3; i<num; i++))
do
c=`expr $c + $d`
echo -n "+$c"
done


echo
