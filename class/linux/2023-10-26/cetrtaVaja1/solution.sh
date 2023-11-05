#!/bin/bash
source=${1}
destination=/Users/titanblast/Development/personal/famnit/freshman-2023:24/prvi-semester/praktikum-1/2023.10.26/backups
zip_name=$(date '+%Y-%m-%d')-backup.zip

if [ "${source}" == "" ]; then
    source=.
    zip -r "${zip_name}" "${source}"
    if [ ${?} -ne 0 ]; then
         echo "Zipping failed"
         exit 1
    fi
    mv "${zip_name}" "${destination}"
    if [ ${?} -ne 0 ]; then
         echo "Move failed"
         exit 1
    fi
    echo "Backup successful, used current dir for backups"

else
    zip -r "${zip_name}" "${source}"
    if [ ${?} -ne 0 ]; then
         echo "Zipping failed"
         exit 1
    fi
    mv "${zip_name}" "${destination}"
    if [ ${?} -ne 0 ]; then
         echo "Move failed"
         exit 1
    fi
    echo "Backup successful"
fi