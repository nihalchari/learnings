#! /bin/bash



while true
do
read -p "Enter Choice 1 2 3 " CHOICE
case $CHOICE in

    1)
    echo "U selelcted one"
    ;;

    2)
    echo "U selelcted two"
    ;;

    3)
    echo "U selelcted three"
    ;;


    *)
    echo "Invalid choice Bye Bye"
    break
    ;;

    esac


done

