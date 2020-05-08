shared_ptr<T>
points to an object of type T  on heap
There can be multiple shared_ptr<T> pointing to same object on heap
Establishes shared ownership relationship
can be assigned or copied
can be moved
When the use count is zero, managed object on heap is destroyed

Reference Counting
Every time shared pointer object is instantiated and have it point or reference to the heap object reference counter will be incremented.
This counter will reflect number of shared pointers referencing heap object
Reference will be decremented when pointer goes out of scope
When Reference count will become zero, means nothing is referencing to heap object then heap object can be safely destroyed
This is having overhead in cyclic/circular design-> solution is weak pointer




make_shared<T>
Function returns shared pointer of specified type