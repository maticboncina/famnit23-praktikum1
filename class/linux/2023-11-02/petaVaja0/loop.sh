#!/bin/bash

echo "first loop"
for number in 0 1 2 3 4 5
do
    echo "Number: ${number}"
done

echo "Second loop"
for number in {0..100}
do
    echo "Number: ${number}"
done

echo "Third loop"
## Step of 5
for number in {0..100..5}
do
    echo "Number: ${number}"
done

echo "Fourth loop"
## Izpiše vsako besedo posebi. Vsaka beseda je ločena z presledkom
for word in This is a sentence
do
    echo "${word}"
done

echo "Fifth loop"
## To je ena beseda, ker smo dali v narekovaje
for word in "This is a sentence" "This is another sentence"
do
    echo "${word}"
done

echo "Sixth loop"
for website in $(cat websites.txt)
do
    echo "********** PINGING WEBSITE ${website} **********"
    ping -c 1 "${website}"
done

## while loop - dokler je pogoj izpolnjen se izvaja. KO nevemo kdaj se konča
echo "While loop"
counter=0
while [ ${counter} -lt 10 ]
do
    echo "Counter: ${counter}"
    
    if [ $RANDOM -gt 16384 ]; then
        counter=$((counter + 1))
    fi
done