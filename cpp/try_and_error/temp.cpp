#include <iostream>

using namespace std;

int main()
{

    int arr[3] = {1, 2, 3};
    int *a = arr;
    a++;
    std::cout
        << *a;
}