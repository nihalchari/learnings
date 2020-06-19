#include <iostream>
#include <vector>

using namespace std;

class Myclass
{
public:
    Myclass(std::string name, std::string identifier)
    {
        name_ = name;
        cout << identifier << endl;
    }

    void getname()
    {
        cout << name_ << endl;
    }

    std::string name_;
};

int main()
{
    Myclass obj("app1", "insta1");
    std::vector<Myclass> arr = {{"app2", "insta2"}, {"app3", "insta3"}, {"app4", "insta4"}};

    for (auto it : arr)
    {
        it.getname();
    }

    return 0;
}
