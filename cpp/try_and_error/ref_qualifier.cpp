///const  -> lvalue or rvalue invocation
///const & -> lvalue invocation
///const && -> rvalue invocation

/// if const is provided, const & and const&& cant



#include<iostream>
using namespace std;


class MyClass{
    public:
    // void display(int a)const;
    void display(int x) const &;
    void display(int y) const &&;
};

// void MyClass::display(int x) const 
// {
//     std::cout << "copy construct " << x << std::endl;
// }


void MyClass::display(int x) const &
{
    std::cout << "copy construct " << x << std::endl;
}

void MyClass::display(int x) const &&
{
    std::cout << "move construct " << x << std::endl;
}

int main()
{
    MyClass obj;
    int x(3);
    obj.display(x);
    std::move(obj).display(5+2);
}