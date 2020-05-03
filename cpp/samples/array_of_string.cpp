#include <iostream>
#include <bits/stdc++.h>

using namespace std;

class Myclass
{
public:
    Myclass(vector<string> AppName_, vector<string> AppInstance_)
        : AppName_l(AppName_), AppInstance_l(AppInstance_)
    {
        cout << "constructor\n";
    }

    void print()
    {
        for (int i = 0; i < AppName_l.size(); i++)
            cout << AppName_l[i] << " " << AppInstance_l[i] << endl;
    }

private:
    vector<string> AppName_l;
    vector<string> AppInstance_l;
};

int main()
{
    vector<string> AppName;
    vector<string> AppInstance;

    AppName.push_back("firstApp");
    AppName.push_back("secondApp");
    AppInstance.push_back("firstInsta");
    AppInstance.push_back("secondInsta");

    Myclass myClassObj(AppName, AppInstance);
    myClassObj.print();
}