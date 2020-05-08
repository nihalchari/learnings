To customize how class members are initialized, or to invoke functions when an object of your class is created, define a constructor.
 Has same name as the class and no return value.
Can define as many overloaded constructors as needed,  compiler chooses which constructor to invoke based on the rules of overload
Typically, constructors have public accessibility 
But you can also declare a constructor as protected or private

Constructors can optionally take a member init list,  which initializes class members prior to execution of the constructor body
more efficient way to initialize class members
const members and members of reference type must be initialized in the member initializer list.





• Constructors may be declared as inline, explicit, friend or constexpr.
• A constructor can initialize an object that has been declared as const, volatile or const volatile. The object becomes const after the constructor completes.



Delegating constructor: calls constructor from otr constructors initialization list. Normally when u have too many overloaded constructors, basically reduces code duplication 

Parameterized constructors : advantage over using overloaded constructors(not always) as we can declare only one constructor that accepts all parameters and initialize parameters to default in constructor declaration.
