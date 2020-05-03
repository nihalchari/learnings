#include <iostream>
using namespace std;

class shape
{

public:
    // if below constrictor is not provided compiler will provide its own default constructor
    shape();

    int volume();

private:
    int len = 0;
    int wdt = 0;
    int hgt = 0;
    // when providing such constructor you need to initialize class data member else output will be garbage
    // int len;
    // int wdt;
    // int hgt;
};

shape::shape()
{
    cout << "Default Constructor is called" << endl;
}

int shape::volume()
{
    return len * wdt * hgt;
}

int main()
{
    cout << "inside main" << endl;
    shape cube;
    cout << "after creating obj" << endl;

    int vol = cube.volume();
    cout << vol << endl;
    return 0;
}

/***********************************************END***************************************************************/

#if 0
class shape
{

public:
    shape();

    int volume();

private:
    int len = 0;
    int wdt = 0;
    int hgt = 0;
};

//initialized using initializer list
shape::shape() : len(1), wdt(2), hgt(3)
{
    cout << "Default Constructor is called" << endl;
}

int shape::volume()
{
    return len * wdt * hgt;
}

int main()
{
    cout << "inside main" << endl;
    shape cube;
    cout << "after creating obj" << endl;

    int vol = cube.volume();
    cout << vol << endl;
    return 0;
}

#endif
/***********************************************END***************************************************************/