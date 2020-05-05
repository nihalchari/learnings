#! /bin/bash

echo "Executing ${0} script"
#echo "1st command line argument is: ${1} "

for ARG in $@
do
	echo "commands are: ${ARG}"
done
