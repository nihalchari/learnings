#include<list>

sequence container
stores elements in non-contiguous memory
Do not provide direct access to elements, access via subscripts operator and .at() method is not available
Very efficient in inserting and deleting element from anywhere in lists once element is found

List acts a doubly linked list, so can traverse in either direction
list has front() and back() method that returns references to 1st and last element respectively. 
lists uses insert() and remove() methods to add and remove elements, push and pop can be used to add/remove at ends.
Needs iterator to the element to be removed or insert before, done by using find method in linear time.


Insert().

Need to find element before whom u need to insert
Use std::find method to search element, which returns iterator
It element is found new element will be inserted in front of that iterator, else inserted at end













forward_list
#include<forward_list>

Acts as a singly linked list, so can be traversed only in one direction
Less overhead than list
Does not support direct element access. That is no subscript operator no .at() method
No concept of back, only front
Reverse iterator not available
size() method is not available
back() method is not available, front() is available
Only push_front(), pop_front() and emplace_front() is available.

Since forward_list is singly linked list,
elements are inserted after iterator and not before. Hence insert_after(), erase_after() and emplace_after are available, instead of insert() , erase().
