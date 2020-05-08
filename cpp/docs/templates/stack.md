#include<stack>

STL adaptor container
Can be implemented as Deque, Vector or Lists (that has back() functionality).
By default implemented as Deque
All Operations occur at one end(top)
No iterators are supported nor STL algorithms

push()
pop()
top()
empty()
size()



std::stack<int> S                                           //Deque (by default)

std::stack<int, std::vector<int>>  S1         // vector     

std::stack<int, std::list<int>>  S1               // list

std::stack<int, std::deque<int>>  S1         // deque