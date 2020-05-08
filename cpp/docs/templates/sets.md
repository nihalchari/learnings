Associative containers
Allows fast retrievals using keys
Implemented as a balanced binary tree
Operations are very efficient



4 types

Set     
#include<set>
Does not Allow duplicates
Elements are ordered
All iterators are allowed 

unordered_set
#include<unordered_set>
Does not Allow duplicates
Elements are unordered
Elements can't be modified, need to erase and add new
No reverse iterators are allowed 

Multiset  
#include<set>
Allow duplicates
Elements are ordered
All iterators are allowed 

unordered_multiset
#include<unordered_set>
Allow duplicates
Elements are unordered
Elements can't be modified, need to erase and add new




#include<set>
Elements in set are ordered by key
No duplicate elements are allowed (even if provided they will be discarded, no error will be thrown)
Elements are automatically sorted
All iterators are available for sets

No concept of front and back
Do not allow direct access to elements, so can't use subscript operator or .at() method 

	
Sets uses overloaded less then operator to determine if element exists in set

Methods

insert()
Inserts the element in set at ordered position and returns the std::pair<iterator, bool>
If value already exists returns the iterator to existed value
bool determines success or failure

erase()  : removes element from sets if present
find()     : returns iterator if value is present
count()    : returns 1 if element is present in set else returns 0
clear()     :  deletes all elements in set
empty()   : returns true if set is empty else returns false
