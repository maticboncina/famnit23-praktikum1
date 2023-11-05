#!/bin/bash

stevilka = 10

#stevilke
# -eq = equal
# -ne = not equal
# -gt = greater than
# -lt = less than
# -ge = greater or equal
# -le = less or equal

if [ $stevilka -eq 10 ]; then

    echo "stevilka je 10"

elif [ $stevilka -lt 10 ]; then

    echo "stevilka je manjsa od 10"

fi

beseda1="bla"
beseda2="bla"

#== sta besedi enaki
#!= sta besedi razlicni

if [ $beseda1 == $beseda2 ]; then
    echo "besedi sta enaki"

fi

# || ali
# && in

if [ $beseda1 && $stevilka -gt 10 ]; then
    echo "besedi sta enaki in stevilo je vecje od deset"
fi

if [ $beseda1 || $stevilka -gt 10 ]; then
    echo "besedi sta enaki ali stevilo je vecje od deset"
fi

#exit 1 (quits reč)

