#include<iostream>
using namespace std;

int & returnByRef( int &x);
int & riskReturnByRef(int &z);

int main(void)
{   
    int a(5);
    int z=20;                   

    std::cout << "&a =" << &a << std ::endl;

    auto & k = returnByRef(a);

    std::cout << "&k= " << &k <<  std::endl;
    std::cout << "a= " << a <<  std::endl;          //6

    ///@note some strange behaviour
    // returnByRef(a) = z;
    // std::cout << "a= " << a <<  std::endl;       //20

    // riskReturnByRef(a)=55;
    // std::cout << "a= " << a <<  std::endl;

    return 0;
}

///@note just for demo
int & returnByRef(int &x)
{
    std::cout << "&x =" << &x << std ::endl;
    ++x;
    return x;
}


///@note ou should return a reference to an existing object that isn't going away immediately, 
///and where you don't intend any transfer of ownership.

// int & riskReturnByRef(int &z)
// {
//     auto t = z;
//     ++t;
//     ///@note should not return reference to local var
//     return t;
// }