#! /bin/bash


#eg1

MY_SHELL="bash"
#echo "i am on $MY_SHELL shell"
#echo "i am on ${MY_SHELL} shell"


#eg2
VARIABLE_NAME=Hello
#echo “Hi.... ${VARIABLE_NAME}world ....”
#echo “Hi.... $VARIABLE_NAMEworld ....”

SERVER_NAME=$(hostname)			#new style
#SERVER_NAME=`hostname`				# old styl
echo "You are runnig script on ${SERVER_NAME}"
