std::queue

Friday, April 24, 2020
9:11 PM

#include<queue>
STL adaptor container
Can be implemented as Deque or Lists (that has back()  and front() functionality).
By default implemented as Deque
No iterators are supported nor STL algorithms


push()      insert from back
pop()        remove from front
back()       display element at end
front()      display element at front
empty()
size()



std::queue<int> S                                           //Deque (by default)

std::queue<int, std::list<int>>  S1               // list

std::queue<int, std::deque<int>>  S1         // deque