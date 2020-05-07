#! /bin/bash

FS_NUM=1

grep for /home/ehc1kor/ehc1kor/repo/learnings/bashprogramming/while_read.txt | while read FS MP REST
do
	echo "${FS_NUM}: ${FS}"
	echo "${FS_NUM}: ${MP}"
	((FS_NUM++))
done


