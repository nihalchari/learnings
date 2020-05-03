#include <iostream>

using namespace std;

///@brief compiler generated default constructor, copy constructor, and copy assignment operator
class Demo
{
public:
    int arr[3] = {1, 2, 3};
};

int main()
{
    cout << "creating obj1 with default values 1 2 3.... Compiler generated default constructor will be called\n";
    Demo obj1;

    cout
        << "creating obj2 from obj1.... Compiler generated copy constructor will be called\n\n";
    Demo obj2(obj1);

    cout << "obj2 is: ";


    for (int i = 0; i < 3; ++i)
    {
        cout << obj2.arr[i] << " ";
        obj2.arr[i] += 5;
    }
    cout << endl;
    cout << "incrementing each obj2 elements by 5\n\n";



    cout << "creating obj3 with default values 1 2 3.... Compiler generated default constructor will be called\n\n";
    Demo obj3;

    cout << "obj3 is: ";
    for (int i = 0; i < 3; ++i)
    {
        cout << obj3.arr[i] << " ";
    }
    cout << endl;

    cout << "Assigning obj2 to obj3...Compiler generated copy assignment operator will be called\n";
    obj3 = obj2;

    cout << "obj3 is: ";
    for (int i = 0; i < 3; ++i)
    {
        cout << obj3.arr[i] << " ";
    }
    cout << endl;

    return 0;
}
