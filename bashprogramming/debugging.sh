#! /bin/bash -xe
# -x will set debugging on for entire script
# prints commands as they execute preceded with + sign
# -e exit script if exit status of command is not 0 

TEST_VAR=1
echo "${TEST_VAR}"
((TEST_VAR++))
set +x          #stops debugging, following comands wont be displayed
echo "${TEST_VAR}"
echo "only output is displayed"

set -x
echo "started debugging again"
echo "Commands will be displayed"

FILE_NAME=/do/not/exist
ls ${FILE_NAME}
echo "Since -e option is used this line will not get printed as file will be terminated coz exit status of ls is not 0"

