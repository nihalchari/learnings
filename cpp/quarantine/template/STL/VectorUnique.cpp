#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    std::vector<int> vec{3, 0, 2, 0, 1, 2};

    std::sort(vec.begin(), vec.end());

    return 0;
}