#! /bin/bash

GLOBAL_VAR="WELCOME"

function fun()
{
	echo "${GLOBAL_VAR} inside fun()  $1"
}


echo "PID of $0 is $$"
fun one
fun two


routine()
{
	ROUTINE_VAR="Hello"
	local LOCAL_ROUTINE_VAR="world"
	for ARG in $@
	do
		echo "inside routine $ARG"
	done
	return 21
}

#ROUTINE_VAR value will not get displayed here as routine function is not yet called
echo "ROUTINE_VAR contains: ${ROUTINE_VAR}"


routine three
routine four five six
echo "exit status of routine : $?"

#ROUTINE_VAR value will get displayed here as routine function is called
echo "ROUTINE_VAR contains: ${ROUTINE_VAR}"

#local variable has to be defined with keyword local and can be declared only inside function, not accessible outside function
echo "LOCAL_ROUTINE_VAR contains: ${LOCAL_ROUTINE_VAR}"

