#! /bin/bash -xv
# -x will set debugging on for entire script
# prints commands as they execute preceded with + sign
# -e exit script if exit status of command is not 0 

echo "Substitution of variables"
TEST_VAR=1
echo "${TEST_VAR}"
((TEST_VAR++))
echo "${TEST_VAR}"

echo "expansion of wildcard"
FILE_NAME=*.sh
ls ${FILE_NAME}
