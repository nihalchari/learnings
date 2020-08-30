#include <iostream>
#include <vector>
#include <bits/stdc++.h>
using namespace std;

// class MyClass
// {
//     int a;

// public:
//     MyClass()
//     {
//         a = 0;
//     }
//     MyClass(int x)
//     {
//         a = x;
//     }
//     MyClass(MyClass &x)
//     {
//         a = x.a;
//         cout << "const";
//     }
//     void operator=(MyClass &x)
//     {
//         a = x.a;
//         cout << "=";
//     }
//     void disp()
//     {
//         cout << endl
//              << a;
//     }
// }
// ;

int missingElements(vector<int> A, int low, int high)
{
    int count = 0;
    while (low <= high)
    {
        auto found = std::find(A.begin(), A.end(), low);
        if (found == A.end())
        {
            ++count;
        }
        ++low;
    }
    return count;
}

int main()
{
    // MyClass a(7), b;
    // b = a;
    // b.disp();

    std::vector<int> vec{1, 2, 3, 4};
    auto res = missingElements(vec, 5, 8);
    std::cout << res << std::endl;

    return 0;
}