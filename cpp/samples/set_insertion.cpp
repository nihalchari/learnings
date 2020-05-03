#include <iostream>
#include <vector>
#include <bits/stdc++.h>

using namespace std;

int main()
{

    vector<int> actual = {30, 20, 70, 90, 40};
    vector<int> expected = {40, 30};
    vector<int> intersection(expected.size());

    vector<int>::iterator it, ls;

    ls = std::set_intersection(expected.begin(), expected.end(), actual.begin(), actual.end(), intersection.begin());

    for (it = intersection.begin(); it != ls; ++it)
    {
        cout << ' ' << *it;
    }

    return 0;
}