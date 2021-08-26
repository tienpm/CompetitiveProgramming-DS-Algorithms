#!/bin/bash

echo "=== START COMPILE ==="
if [ -x "run" ]
then 
	rm run
fi
g++ main.cpp -std=c++14 -o run
echo "=== COMPILE COMPLETE ==="
if [ -e "input.txt" ]
then
	echo "Not found INPUT file. Please input data"
fi
echo "=== Run Solution ==="
./run < input.txt
