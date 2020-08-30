#include<iostream>
#include<vector>

using namespace std;

int main()
{

    vector <int> vec ={1,2,3,4,5};

    for(auto &x : vec)
    {
        ++x;
    }

    for(auto &x : vec)
    {
        cout << x << endl;
    }

    return 0;

}