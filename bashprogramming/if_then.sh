#! /bin/bash

SHELL="csh1"
if [ "$SHELL" = "bash" ]
then
	echo "you are on bash shell"
elif [ "$SHELL" = "csh" ]
then
	echo "you are on C shell"
else 
	echo "dont know which shell"
fi
