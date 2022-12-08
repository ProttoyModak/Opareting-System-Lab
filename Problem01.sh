#!/bin/bash

echo "Showing current directory: "
pwd

echo "Showing list of files & folders in current directory: "
ls

echo "Creating a folder named: 201-15-13655"
mkdir 201-15-13655

echo "Change directory to the new folder: "
cd 201-15-13655

echo "Create a text file & write something: "
cat > f1.txt 

echo "Create another text file: "
cat > f2.txt

echo "Concatanate two files: "
cat f1.txt f2.txt > f3.txt