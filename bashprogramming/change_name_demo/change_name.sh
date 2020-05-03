#! /bin/bash

PICTURES=$(ls *jpg)
DATE=$(date +%F)

for PIC in $PICTURES

do 
	echo "changing name ${PIC} to ${DATE}-${PIC}"
	mv ${PIC} ${DATE}-${PIC}
done	
