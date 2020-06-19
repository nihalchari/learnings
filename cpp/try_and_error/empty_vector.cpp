#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    vector<int> vec{5};

    auto found = find_if(vec.begin(), vec.end(), [](int a) { return a == 5; });

    if (found != vec.end())
    {
        std::cout << "element found\n";
    }

    if(found == vec.end())
    {
	    std::cout << "element not found\n";
    }

    return 0;
}
