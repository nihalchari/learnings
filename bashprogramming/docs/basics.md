#! /bin/bash	shebang followed by path to interpreter

# is known as SHARP sign in music notation|
! is refer as BANG|
#! SHARP BANG 
shebang is an inexact contraction of SHARP BANG
when u excetue the script that contains shebang, what happens is, the interpreter is executed and the path used to call the script (might be taken as parameter0 argument ) is passed as a argument to the interpreter

can be proved using following script sleepy.sh
#! /bin/bash
sleep 90
run above script in background
./sleepy.sh &
and then examin using ps
ps -fp process id

nihal@nehal-VirtualBox:~$ ./sleepy.sh &
[1] 16737
nihal@nehal-VirtualBox:~$ ps -fp 16737
UID        PID  PPID  C STIME TTY          TIME CMD
nihal  16737  2303  0 20:49 pts/0    00:00:00 /bin/bash ./sleepy.sh

now running script from other location
nihal@nehal-VirtualBox:~$ ./nihal/sleepy.sh &
[1] 16954
nihal@nehal-VirtualBox:~$ ps -fp 16954
UID        PID  PPID  C STIME TTY          TIME CMD
nihal  16954  2303  0 21:37 pts/0    00:00:00 /bin/bash ./nihal/sleepy.sh

if shebang is not provided, command will be excuted using current shell. 



VARIABLES
storage locations that have name
are case sensitive
By convention Upper Case is used
can contail letters, digits and underscore
cannot start with a digit
Syntax
	VARIABLE_NAME=”value”
@note: no space around = sign

To use variables precede with $
eg  $VARIABLE_NAME
Also name can be placed in curly{} precede with $
eg    ${VARIABLE_NAME}

curly are optional but used when we need to preceed or follow the variable with additional data
eg 
VARIABLE_NAME=”Hello”
echo “Hi.... ${VARIABLE_NAME}world ....”
above line will print           “Hi.... Helloworld ....”
echo “Hi.... $VARIABLE_NAMEworld ....”
above line will print            “Hi.... ....”


SHELL_PID =$($$)
$$ will return the PID of currently executing shell script 



Assign output of command to variable
eg 
SERVER_NAME=$(hostname)
SERVER_NAME=`hostname`			#old style
echo "You are runnig script on ${SERVER_NAME}"


Tests
used to make decision based on status
To create test place a condiotional expression between brackets [ ]
used to check if two strings are equal, number less than....

run command            
help test			#to see more details
also use 			
man test

syntax
[ condition to test for]

eg
	[ -e  /etc/passwd]
this test if /etc/passwd file exists or not


Positional parameters
are variables that contains contents of command line
variables are from $0 to $9
script itself is stored in $0, 1st parameter in $1, 2nd in $2 and so on ..
eg
script.sh para1 para2 para3
$0 : "script.sh"
$1: "para1"
$2: "para2"
$3: "para3"
to acccept all arguments from $1 to $9 use  $@

 to accept standard input use read command
std ip typically comes from person typing a command, but it can also come from other sources as output of a command and in a command pipeline
syntax
	read -p "PROMPT" VARIABLE_NAME
"PROMPT" is message to display


The semicolon
use semicolon ; to separate multiple command on same line
semicolon  does not check exit status of previous command

Exit command
can control exit status of shell script using exit command
use exit command followed with a number from 0-255.
If return code is not specified, then exit status of previously executed command  is used as exit status
Shell script will stop running once exit command is reached


Functions
By default variable declared in script are global(inside/outside function)
local variable are allowed only inside function
global variable declared inside function body are accessible outside function only after function call.

local variables
use keyword local to declare local variable
Can only be used inside function

return statement/ exit status of function
return keyword is used.
If explicitly not mentioned exist status of last command in function will be returned as exit status of function
only number between 0-255 can be used as exit status

To access exit status of function use $?  right after function is called.

case
syntax
case "$VAR" in
	pattern1)
	#commands ;;
	pattern 2)
	#commands;;
	*)	#other then mentioned pattern
	#commands;;
esac





Logging
Linux OS uses syslog standard for message logging
/var/log/messages
/var/log/syslog
syslog uses Facilities and Severities to catagorise messages
Each message is labeled with facility code and severity level
Facilities: use to indicate what type of code or what part of system the message is originated from
Facilities : Kern, user, mail, daemon, auth, local0,  .... local	7
Severities: emerg, alert, crit, err, warning, notice, info, debug

can use logger command
by default logger creates  messages with user facility and notice severity
user.notice 

to specify facility and severity use -p option, followed by facility.severity
eg
logger "Message"			#uses default
logger - p local0.info "Message"

to tag message use -t option
logger -t $0 -p local0.info "Message"
above command will use name of script as a tag

to include process ID use  -i option
to display message to screen  use -s option
logger -i -s -t $0 -p local0.info "Message"


Debugging
-x option
prints commands as they execute preceded with + sign
prints commands after Substituition and expanstion
Subtitution: instead of variables, values of variable will be displayed
expansion: wildcaed arent displayed but there expansion is displayed

#! /bin/bash -x
providing -x option at shebang is applicalble to entire script
or to use for specific part of script
set -x			#start debugging
commands
set +x			#stop debugging

-e option
Exit on error
It causes to exit script immadiately if a command exits with non-zero exit status
#! /bin/bash -e
#! /bin/bash -xe
#! /bin/bash -ex
#! /bin/bash -x -e
#! /bin/bash -e -x

-v option
print shell input lines as they are read
can be combined with other options
unlike -x, this command will print before substituiton and expansion
@note: can be used -vx together to know how line looks before and after substitution and expansion
for more details use 
help set | less

BASH VARIABLES
BASH_SOURCE : name of the script
LINENO : line no of script
FUNCNAME : name of function
PS4 : expanded and displayed before each command during execution trace,     	i.e, when u set -x option, contents of PS4 are printed to screen b4 each 	command, by default this is + sgn 
PS1 : controls what is displayed as command prompt
