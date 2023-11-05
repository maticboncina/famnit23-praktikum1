#!/bin/bash 

day="Oct 03"
echo "Extracting logs for $day ..."
grep "$day" log.txt > tmp.txt

echo "Number of errors:"
grep -ic "error" tmp.txt

rm tmp.txt
