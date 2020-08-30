#include <iostream>
#include <iostream>
#include <bits/stdc++.h>

using namespace std;

template <typename T1, typename T2>
auto isPresent = [&](std::vector<T1> vec, T2 val) {
    auto it = std::find(vec.begin(), vec.end(), val);
    if (it != vec.end())
    {
        return *it;
    }
    else
    {
        return *vec.begin();
    }
};

int main()
{

    std::vector<float> vec_int = {1.3, 2.4, 3.9, 4.2};
    int val = 4.2;
    std::cout << isPresent<float, float>(vec_int, val) << std::endl;
}