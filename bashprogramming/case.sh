#! /bin/bash

read -p "Enter y or n " ANSWER


case $1 in
    one | ONE | 1)
    echo "u have supplied ${1} as command line argument "
    ;;
esac


case $ANSWER in

    [yY] | [yY][eE][sS] )
    echo "you agree..."
    ;;

    [nN] | [nN][oO] )
    echo "you disagree..."
    ;;

    *)
    echo "invalid option"
    ;;

    esac



