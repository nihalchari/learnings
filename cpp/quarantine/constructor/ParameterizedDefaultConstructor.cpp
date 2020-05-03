#include <iostream>
using namespace std;

class shape
{

public:
    shape(int l = 1, int w = 2, int h = 3);

    int volume();

private:
    int len;
    int wdt;
    int hgt;
};

shape::shape(int l, int w, int h) : len(l), wdt(w), hgt(h)
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
