A move constructor enables the resources owned by an rvalue object to be moved into an lvalue without copying. 

std::move()
 doesn't actually move anything. It converts an expression from being an lvalue (such as a named variable) to being an xvalue. An xvalue tells the compiler:

  You can plunder me, move anything I'm holding and use it elsewhere (since I'm going to be destroyed soon anyway)".



The move constructor is used instead of the copy constructor, if the object has type "rvalue-reference" (Type &&).
std::move() is a cast that produces an rvalue-reference to an object, to enable moving from it.

https://www.educative.io/edpresso/what-is-a-move-constructor-in-cpp
https://smartbear.com/blog/develop/c11-tutorial-introducing-the-move-constructor-and/