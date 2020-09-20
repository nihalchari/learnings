#include <iostream>
using namespace std;

int greatest__num(const int &a, const int &b, const int &c)
{
    if (a > b && a > c)
    {
        return a;
    }

    if (b > c)
    {
        return b;
    }
    else
    {
        return c;
    }
}