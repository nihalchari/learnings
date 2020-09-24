#include<iostream> 
using namespace std;

[[depricated("doSometing is inefficient , instead use doSomethingBetter()")]]
void doSomething()
{
    cout << "i m doing something in obsolute way\n";
}

void doSomethingBetter()
{
    cout << "i am doing something in better way\n";
}


int main()
{
    doSomething();
    return 0;
}