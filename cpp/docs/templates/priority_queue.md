std::priority_queue

Friday, April 24, 2020
9:14 PM

#include<queue>

STL adaptor container
Allows insertion and removal of elements in order from front of container
Elements are stored as vector by default
Elements are inserted in priority order, so largest priority element will always be at front 
No iterators are supported nor STL algorithms



push()          inserts element in sorted manner
pop()            removes top element(highest priority element , by default greatest value of element)
top()             access top element without removing it