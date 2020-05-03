#include <iostream>
#include <vector>
using namespace std;

int main()
{

    int handle = 10;
    using FindServiceHandle = int;
    using FindServiceHandler = int;

    using handle1 = std::pair<FindServiceHandle, FindServiceHandler>;

    vector<handle1> handler;
    handler.push_back(make_pair(10, 5));
    handler.push_back(make_pair(101, 5));
    handler.push_back(make_pair(10, 5));

    for (auto it = handler.begin(); it != handler.end(); ++it)
    {
        cout << handler.size() << endl;
        if ((*it).first == handle)
        {
            handler.erase(it);
            cout << handler.size() << endl;
            break;
        }
    }
    return 0;
}