Steps to signoff existing commits
1. 	git rebase - i HEAD~N
		This will open editor showing lattest N commits
2.	Replace "pick" with "edit"  at start of line for commits u need to signoff
		save and close editor
		It will promp "Stopped at <commit id .....> on terminal
		(it will stop at commit that u have marked as "edit"
3. 	git commit --amend -s
		editor will be opened and u can see ur sign is added below commit message
		close the editor.
 4.	git rebase --continue
		Now it will stop at next commit that u have marked as "edit"
		Repeat step 3 and 4, till all commits that you have marked are "edit" are edited.
 
5.	Once this is done run  git rebase --continue once again, following message will be 		displayed on etrminal
		Successfully rebased and updated refs/heads/name/of/the/branch
6. 	git push -f 


@note: problem faced.
I had lattest 6 commits commited by me to be changed
git rebase - i HEAD~7 	this command tried to merge some files and ended in conflicts
why 7?
followed online steps
https://confluence.atlassian.com/stashkb/how-do-you-make-changes-on-a-specific-commit-747831891.html
git rebase --abort
git rebase - i HEAD~6
this worked fine.
