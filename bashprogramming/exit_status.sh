#! /bin/bash

HOST="www.google.com"

wget ${HOST}

if [ "$?" -eq "0" ]
then
	echo "HOST RECHABLE"
else
	echo "HOST UNRECHABLE"
fi



if [ "$?" -ne "0" ]
then
	echo "HOST UNRECHABLE"
fi
