#include <iostream>
using namespace std;

class Myclass
{
public:
    Myclass()
    {
        print();
    }

    void fun()
    {
        cout << "fun" << endl;
        private_method();
    }

    ~Myclass()
    {
        delete ptr;
    }

private:
    int num = 5;
    int *ptr{nullptr};

    void print()
    {
        cout << num << endl;
    }

    void private_method()
    {
        cout << "private_method" << endl;
        ptr = new int(21);
    }
};

int main()
{

    if (true)
    {
        Myclass obj;
        obj.fun();
        return 0;
    }
}