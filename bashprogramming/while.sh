#! /bin/bash

INDEX=1

while [ ${INDEX} -lt 5 ]
do
    echo "INDEX is ${INDEX}"
    ((INDEX++))
done


while [ "${CONFIRM}" != "yes" ]
                    
do
    read -p "Enter your name " NAME
    read -p "You have entered ${NAME}, press yes to confirm else press no " CONFIRM
done

LINE_NO=1
while read LINE
do 
    echo "${LINE_NO}: ${LINE}"
    ((LINE_NO++))
done < /home/ehc1kor/ehc1kor/repo/learnings/bashprogramming/variable.sh


