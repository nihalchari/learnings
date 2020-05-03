//#include "header.h"

#include <iostream>
class outer
{
public:
    int outerX;
    static void printOuter();

    class inner
    {

    public:
        int innerX;
        static void printInner();
        };
};

void outer::printOuter()
{
    std::cout << "outer";
}

void outer::inner::printInner()
{
    std::cout << "inner";
}

int main()
{

    outer outObj;
    outer::inner inObj;

    outObj.printOuter;
    inObj.printInner;

    return 0;
}