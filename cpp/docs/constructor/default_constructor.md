A default constructor is a constructor which can be called with no arguments (either defined with an empty parameter list, or with default arguments provided for every parameter). 


Default constructors typically have no parameters, but they can have parameters with default values
 If no constructors are declared in a class, the compiler provides an implicit inline default constructor.


You can prevent the compiler from generating an implicit default constructor by defining it as deleted:
	Box() = delete;
A compiler-generated default constructor can be defined as deleted if any class members are not default-constructible


If any non-default constructors are declared, the compiler does not provide a default constructor
If a class has no default constructor, an array of objects of that class cannot be constructed by using square-bracket syntax alone
However, you can use a set of initializer lists to initialize an array of Box objects:
