#!/bin/bash

number=1
echo -n "Enter row number here: "
read row

for ((i=1; i<=row; i++))
do
	for((j=1; j<=i; j++))
	do
	echo -n "$i"
	done
echo
done
