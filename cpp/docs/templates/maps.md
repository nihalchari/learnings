Associative containers
Allows fast retrievals using keys
Implemented as a balanced binary tree
Operations are very efficient


4 types

map     	
#include<map>	
Does not Allow duplicates	
Ordered by key		
All iterators are allowed 

unordered_map	
#include<unordered_map>	
Does not Allow duplicates	
Elements are unordered	
Elements can't be modified, need to erase and add new	
No reverse iterators are allowed 

Multimap	 
#include<map>	
Allow duplicates	
Ordered by key		
All iterators are allowed 

unordered_multimap	
#include<unordered_map>	
Allow duplicates	
Elements are unordered	
Elements can't be modified, need to erase and add new	
No reverse iterators are allowed 


Elements in maps are stored as key, Value pairs(std::pair)
Ordered by key
No duplicate elements(keys are unique)
Direct element access using keys
No concept of front or back
