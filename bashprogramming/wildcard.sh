#! /bin/bash

for FILE in wildcard_demo/*.txt
do
	echo "copying ${FILE}"
	cp $FILE /home/ehc1kor/ehc1kor/repo/ehc1kor/learnings/bashprogramming/change_name_demo
done
