#include<iostream>
#include<string>
using namespace std;

class  TestClass
{
    public:
    int i;
    float f;
    double d;
    char carr[8];
    std::string str;

};





int main()
{
    std::string str;
    TestClass testObj;

    cout << str.size() << endl;
    cout << sizeof(std::string) << endl;
    cout << sizeof(TestClass) << endl;
    cout << sizeof(testObj) << endl;


    return 0;
}