Variables List and Strings


cmake -P CMakeLists.txt
-p executes cmake in scripting mode


message()
Excepts optional mode of display[optional], and string message
Modes of display: STATUS DEBUG WARNING FATALERROR

project() command can't be used as it is not scriptable



Variables
All variables in cmake are of string type

created using
set(variable_name variable_value)

Dereferenced using
${variable_name}



set(NAME Nihal Chari)                   same as        List 'NAME'=Nihal;Chari
set(NAME "Nihal Chari")               same as        String 'NAME' = "Nihal Chari"




List in Cmake is list of semicolon separated items
List can be operated using list()


String can be operated using string()




set command                     value of VAR          message(${VAR})         message("${VAR}")

set(VAR aa bb cc)               aa;bb;cc                aabbcc                  aa;bb;cc
set(VAR aa;bb;cc)               aa;bb;cc                aabbcc                  aa;bb;cc
set(VAR "aa" "bb" "cc")         aa;bb;cc                aabbcc                  aa;bb;cc
set(VAR "aa bb cc")             aa bb cc                aa bb cc                aa bb cc
set(VAR "aa;bb;cc")             aa;bb;cc                aabbcc                  aa;bb;cc






list(<subcommand>  <name of the list to be operated>  <return var of subcommand if any)>)

list()
subcommands : APPEND
			INSERT
			FILTER
			GET
			JOIN
			
			
For strings  :string()
			FIND
			REPLACE
			TOLOWER
			TOUPPER
			COMPARE EQUAL
			
			
To operate on files :file()
			READ
			WRITE
			RENAME
			REMOVE
			COPY
			LOCK
			DOWNLOAD
