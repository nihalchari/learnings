#include <iostream>
using namespace std;

int main()
{

    int arr[] = {1, 2, 3};
    int arr4[] = {4, 5, 6};

    for (auto ele1 : arr &&auto ele2 : arr4)
    {
    }

    for (int x = 0, y = 0; x < 10 && y < 10; x++, y++)
    {
        // Your code here
    }

    return 0;
}