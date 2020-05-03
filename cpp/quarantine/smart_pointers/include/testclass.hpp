#include<iostream>
#include<string>
using namespace std;

class test
{
    public:

    test()
    {
        count = ++s_count;
        cout << "test class default constructor is called for object" << count << endl;
    }

    ~test(){cout << "test class destructor is called object" << count << endl;}

    test(const test& temp)
    {
        cout << "test class copy constructor is called\n";
    }

    test& operator=(const test& temp)
    {
        cout << "tset class assignment operator is called\n";
    }


    void hello()
    {
        cout << "Hello.......object"<< count<<endl;
    }

    private:
    static int s_count;
    int count;
    string name;
};
