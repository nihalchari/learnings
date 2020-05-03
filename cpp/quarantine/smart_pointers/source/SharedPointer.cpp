#include "../include/testclass.hpp"
#include<memory>

int test::s_count;

int main()
{
    shared_ptr<test> ptr1 (new test);
    cout << ptr1.use_count() << endl;           //1

    /// shared pointer can be cpoied
    shared_ptr<test> ptr2 (ptr1);
    cout << ptr1.use_count() << endl;           //2

    shared_ptr<test> ptr3;
    /// shared pointer can be assigned
    ptr3 = ptr1;

    cout << ptr1.use_count() << endl;           //3

    ptr2.reset();

    cout << ptr1.use_count() << endl;           //2


    return 0;
}