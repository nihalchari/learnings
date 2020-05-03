#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main()
{

    std::vector<int> vec;
    int num = 1;

    for (int i = 0; i < 5; ++i)
    {
        vec.push_back(i);
    }

    auto found = std::find_if(vec.begin(), vec.end(), [num](const int x) { return x == num; });

    if (found != vec.end())
    {
        vec.erase(found);
    }

    for (auto ele : vec)
    {
        cout << ele << endl;
    }

    return 0;
}