#include <iostream>
using namespace std;

int q = 0;
void fun(int a, int b)
{
    cout << a + b << endl;
    cout << ++q << endl;
}

int main()
{

    void (*funptr[3])(int, int) = {fun, fun, fun};

    funptr[0](1, 2);
    funptr[1](10, 20);
    funptr[2](100, 200);
    return 0;
}