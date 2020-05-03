#include <iostream>
using namespace std;

class num
{
public:
    num(){};
    num(int i = 1) : val(i) {}
    //num(int i) : val(i) {}

private:
    int val;
};

int main()
{
    num num1;
    /// removing default parameter from declaration of 2nd constructor will run this code withot error
    num num2(1);
    return 0;
}
