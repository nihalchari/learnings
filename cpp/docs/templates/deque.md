#include <deque>

Acts as a double ended queue i.e. allows deletion and insertion at back and front efficiently (other than front and back is not that efficient)
size is dynamic
allows direct element access using subscript operator(no bounds check) and .at()(bounds check) method
Elements are not stored in contiguous memory, can be virtualize deque as linked list of vectors
Implemented as collection of memory blocks, blocks contain elements in contagious memory