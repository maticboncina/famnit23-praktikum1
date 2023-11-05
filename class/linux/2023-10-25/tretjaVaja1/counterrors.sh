#!/bin/bash 

echo "Extracting logs..."
grep "Oct 03" log.txt > tmp.txt

echo "Number of errors:"
grep -ic "error" tmp.txt

rm tmp.txt
