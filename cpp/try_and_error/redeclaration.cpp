#include <iostream>

using namespace std;

void fun(const int &);

void fun(const int &);
int main()
{
    fun(1);
    return 0;
}

void fun(const int &num)
{
    std::cout << num << std::endl;
}

void fun(const int &val)
{
}
