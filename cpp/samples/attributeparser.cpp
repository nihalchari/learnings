#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
#include <strings.h>
using namespace std;

int main()
{

    int n, q;
    cin >> n >> q;
    std::vector<string> inputstr;
    std::vector<string> attrstr;
    string str;

    cin.ignore();
    for (int i = 0; i < n; ++i)
    {
        getline(cin, str);
        inputstr.push_back(str);
    }

    for (int i = 0; i < q; ++i)
    {
        getline(cin, str);
        attrstr.push_back(str);
    }

    str.clear();

    std::string ch;
    while (1)
    {
        auto it = inputstr[0].rbegin();

        if (*it != '~')
        {
            ch.push_back(*it);
            inputstr[0].pop_back();
        }
        if (*it == '~')
        {
            break;
        }
    }

    return 0;
}
