unique_ptr<T>
Points to an object of type T  on heap
There can be only one unique_ptr<T> pointing to specific object on heap
cannot be assigned or copied While creating vector, in range based for loop
can be moved
When pointer is destroyed what it points to is automatically destroyed



make_unique<T>
Function returns unique pointer of specified type


get() method          
returns pointer to the managed object

reset() method
sets pointer to NULL, and memory it points will be releases