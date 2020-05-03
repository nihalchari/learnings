#include <iostream>
class outer
{
public:
    int outerX;
    void printOuter() { std::cout << "outer"; }

    class inner
    {

    public:
        int innerX;
        void printInner() { std::cout << "inner"; }
    };
};