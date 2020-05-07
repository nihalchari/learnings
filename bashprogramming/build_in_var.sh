#! /bin/bash -x

PS4='+ ${BASH_SOURCE} : ${LINENO} : ${FUNCNAME} '


myfun()
{
    local TSET_VAR=1
    echo ${TEST_VAR}
}


myfun

