#!/bin/bash

echo -n "Enter your result here: "
read res
if [ $res -gt 100 ]
then
echo "Invalid number"
elif [ $res -ge 80 ]
then
echo "A+"
elif [ $res -ge 60 ]
then
echo "A"
elif [ $res -ge 50 ]
then
echo "B"
else
echo "Fail"

fi
