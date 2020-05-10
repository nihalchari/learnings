*******************if_else()********************8

			If(<condition>)
				<commands>
			elseif(<condition>)
				<commands>
			else
				<commands>
			endif()
			
			
			Following can be passed as a condition in if block
			TRUE: ON, YES, TRUE, Y , a non-zero number
			FALSE: OFF, NO, FALSE, N, IGNORE, NOTFOUND, empty string, string ending with -NOTFOUND
			
			
			If we pass variable name as a condition in if block, it automatically perform dereferencing for us 
			
			<Condition>  of if also supports unary tests, binary tests, Boolean operator
			
			unary_tests : used to check if something is exist or not
				DEFINED : check if variable is set or not
				COMMAND : used to check if command exists or not
				EXISTS : file or directory exists or not
				
			Binary_tests: used to check if two variables or strings are equal, not equal, less then, or greater then 
			
			STRLESS:
			STRGREATER
			STREQUAL
			
			Boolean operator:
			NOT
			AND
			OR
			
			This operator can be combined with unary and binary tests
			




********************************LOOPING*******************************************************







