#!/bin/bash

x=20
y=5

sum=`expr $x + $y`
echo "Summation: $sum"

sub=`expr $x - $y`
echo "Subtraction: $sub"

mul=`expr $x \* $y`
echo "Multipication: $mul"

div=`expr $x / $y`
echo "Division: $div"
