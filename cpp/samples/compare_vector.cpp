#include <iostream>
#include <vector>
#include <algorithm>
//#include <string>
using namespace std;
int main()
{
    std::vector<std::string> s1;
    std::vector<std::string> s2;

    s1.push_back("instance3");
    s1.push_back("instance2");
    s1.push_back("instance1");
    s2.push_back("instance2");
    s2.push_back("instance4");
    s2.push_back("instance3");

    sort(s1.begin(), s1.end());
    sort(s2.begin(), s2.end());

    for (auto it : s1)
    {
        cout << it << endl;
    }

    for (auto it : s2)
    {
        cout << it << endl;
    }

    for (auto it_s1 = s1.begin(), it_s2 = s2.begin(); it_s1 != s1.end(); it_s1++, it_s2++)
    {
        if (*it_s1 != *it_s2)
        {
            cout << "call call_back_handler" << endl;
            break;
        }
        else
        {
            cout << "No change" << endl;
        }
    }
}