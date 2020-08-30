#include <iostream>
using namespace std;

class MyClass
{
public:
    MyClass(int x) : val(x) {}
    // void Swap(MyClass &other);
    void Swap(MyClass &rhs, MyClass &lsh);
    int val;
};

// void MyClass::Swap(MyClass &other)
// {
//     auto temp = std::move(other);
//     other = *this;
//     *this = temp;
// }

void MyClass::Swap(MyClass &rhs, MyClass &lhs)
{
    auto temp = rhs;
    rhs = std::move(lhs);
    lhs = std::move(temp);
}

int main(void)
{
    MyClass a(5);
    MyClass b(10);

    std::cout << a.val << " " << b.val << std::endl;
    // a.Swap(b);

    /// doest not make sense
    a.Swap(a, b);
    std::cout << a.val << " " << b.val << std::endl;
    return 0;
}