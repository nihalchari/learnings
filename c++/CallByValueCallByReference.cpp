#include<iostream>
using namespace std;

void increment( int &, int );

int main(void)
{
    ///@note way of initialization in c++
    int a(5);

     int b(5);

    std::cout << "&a =" << &a << std ::endl;
    increment(a,b);
    std::cout << "a= " << a << "   b=" << b <<  std::endl;
    return 0;
}


void increment( int &x, int y)
{
    std::cout << "&x =" << &x << " &y=" << &y << std::endl;
    ++x;
    ++y;
}





///swapping two values in c using call by address(pass address and catch in pointer) can be achieved by call by reference in c++, please try
/// to return more then 2 values from function

///@note
///if para to be only input -> call by value but it will make copy
///if para to be  input & output -> call by ref
/// to use ref and make it only input make it const
