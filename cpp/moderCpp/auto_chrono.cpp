#include<iostream>
#include<chrono>

using namespace std;
using namespace std::chrono;

int main()
{

    int j;          /// uninitialized
    int i{};        ///initialized to 0
    cout << "i= " << i << endl;
    cout << "j= " <<j << endl;


    seconds s1{};

    ///@note compiler error as 10 will be considered as int;
    // seconds s2 = 10;

    auto s3 =10s;

    ///@note auto will deduce type to const char* and not to std::string
    auto ctr = "constcharptr";

    ///@note check for suffix s
    auto str = "stdstring"s;

    return 0;
}