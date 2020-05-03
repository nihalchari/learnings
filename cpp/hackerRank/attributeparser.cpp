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
    string attribute, tag;
    int j = 0;
    while (j < q)
    {

        while (1)
        {
            auto it = attrstr[j].rbegin();

            if (*it == '~')
            {
                attrstr[0].pop_back();
                reverse(str.begin(), str.end());
                attribute = str;
                str.clear();
                cout << attribute << endl;
                break;
            }
            str.push_back(*it);
            attrstr[j].pop_back();
        }

        while (1)
        {
            auto it = attrstr[j].rbegin();
            if (*it != '.' || (attrstr[0].rbegin() != attrstr[j].rend()))
            {
                attrstr[0].pop_back();
                reverse(str.begin(), str.end());
                tag = str;
                str.clear();
                cout << tag << endl;
                break;
            }
        }
        ++j;
    }
    return 0;
}
