Copy constructor is called when a new object is created from an existing object, as a copy of the existing object. And assignment operator is called when an already initialized object is assigned a new value from another existing object. 



If you do not declare a copy constructor, the compiler generates a member-wise copy constructor for you. If you do not declare a copy assignment operator, the compiler generates a member-wise copy assignment operator for you. Declaring a copy constructor does not suppress the compiler-generated copy assignment operator, nor vice versa. If you implement either one, we recommend that you also implement the other one so that the meaning of the code is clear.

From <https://docs.microsoft.com/en-us/cpp/cpp/copy-constructors-and-copy-assignment-operators-cpp?view=vs-2019> 



Sometimes copy constructor is not called due to something called copy elision which is a compiler optimization technique that eliminates unnecessary copy

Return value optimization is also a compiler technique of not creating copy of return value

















A copy constructor of class T is a non-template constructor whose first parameter is T&‍, const T&‍, volatile T&‍, or const volatile T&‍, and either there are no other parameters, or the rest of the parameters all have default values. 


Syntax

Typical declaration of a copy constructor. 
class_name ( const class_name & ) 	

Forcing a copy constructor to be generated by the compiler. 	
class_name ( const class_name & ) = default; 	
	
• Avoiding implicit generation of the copy constructor. 	
class_name ( const class_name & ) = delete; 	



The copy constructor is called whenever an object is initialized from another object of the same type .

initialization: T a = b; or T a(b);, where b is of type T;

Or

function argument passing: f(a);, where a is of type T and f is void f(T t); 
function return: return a; inside a function such as T f(), where a is of type T, which has no move constructor


Make the type of the copy constructor's argument const class-name& whenever possible. This prevents the copy constructor from accidentally changing the object from which it is copying. It also enables copying from const objects.





Compiler-generated copy constructors, like user-defined copy constructors, have a single argument of type "reference to class-name." An exception is when all base classes and member classes have copy constructors declared as taking a single argument of type const class-name&. In such a case, the compiler-generated copy constructor's argument is also const.
When the argument type to the copy constructor is not const, initialization by copying a const object generates an error. The reverse is not true: If the argument is const, you can initialize by copying an object that is not const.