#include <iostream>
using namespace std;

// constexpr int fun(void)
// {
//     int x = 1;
//     return x;
// }

int fun(void)
{
    int x = 1;
    return x;
}

int main()
{
    const int x = fun();
    cout << "x= " << x << endl;

    constexpr int y = fun();
    cout << "y= " << y << endl;

    return 0;
}