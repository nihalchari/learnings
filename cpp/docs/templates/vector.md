#include<vector>


Elements are stored in contiguous memory as an array


Direct element access : constant time
Insertion and deletion at back : constant time
Insertion and deletion other than back : linear time


Vector declaration

std::vector<int> vec1 {1,2,3,4,5};
std::vector<int> vec2(10,100)   //vector of 10 elements initialized to 100, call overloaded constructor

Also supports assignment via initializer list
Vec2 = {10,20,30}; 



Push vs emplace

Push_back : object needs to be created first. push pushes object
Emplace_back : expects parameter that would normally be passed into the class constructor

Pushing on vector will normally create copy of objects, that can be avoided using emplace_back wherever possible



vec1.swap(vec2)
Type should be same, size can be different 
