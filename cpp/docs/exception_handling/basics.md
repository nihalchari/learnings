Should be used only for synchronous code
Dealing with extra-ordinary situation that is occurred or about to occur
Dealing means in some cases able to recover and continue, Other cases may be only alternative is to terminate program, but how to terminate can be controlled, close files, save data and fail soft.




Causes of exceptions
Insufficient resources	Out of memory or no external storage left
Missing resources	Open and read file, but file doesn’t exist
Invalid operations	
Range violations
Underflows and overflows
Illegal data and many others


When our code handles exceptions then program is called exception safe


Exception handling terminology

Exception : an object or primitive type that signals an error has occurred
In many cases exception object also contains information about what had happened when code determines something is wrong
Then code throws an exception

Catching exception
Y cant code can deal with exception?
Sometimes it deals, handles it itself, but more most cases problem is detected in one place of program(in some function may be), and that part of program is not aware what to do, so it throws exception and hopes some other part of program will deal with it.


Throwing an exception : 
There is where catching of exceptions comes in
In some cases Dealing means simply displaying or logging an error message and terminating the program if program can't continue
In other case , may be handle the exception recover and continue processing

Ex.
Some function tries to allocate memory dynamically, but sufficient memory is not available, we can throw exception here.
At some other part of code where we can catch this exception, clear buffer or cache and try to release some memory


Keywords used for same are
throw  : throws an exception followed by an argument(which is the exception we are throwing)

try  :   {code that may throw exception}
try is a block where we can place our code that may throw exception
If code throws exception try block is exited i.e. rest of the code will not execute
Thrown exception is handled by catch handler
If no catch handler exists program terminates


catch(Exception ex){code to handle exception}
Catch block only executes if the exception is thrown and type of the thrown exception matches the parameter in catch block
Can have multiple catch handlers
May or may not cause program to terminate


Catch all handler
Catch all handler will fire , no matter what type exception is thrown
If used, normally placed at last of catch blocks, will catch anything that was not handled before

Prototype  :: catch(…){}


Never call exception from destructor bcz it is marked as no except by default
