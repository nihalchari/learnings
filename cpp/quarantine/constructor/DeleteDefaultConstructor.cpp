#include <iostream>
using namespace std;

class shape
{

public:
    shape() = delete;
    ///A compiler-generated default constructor can be defined as deleted if any class members are not default-constructible
    shape(int val);
    shape(int l, int w, int h);

    int volume();

private:
    int len;
    int wdt;
    int hgt;
};

shape::shape(int val) : len(val), wdt(val), hgt(val)
{
    cout << "Constructor with one argument is called" << endl;
}

shape::shape(int l, int w, int h) : len(l), wdt(w), hgt(h)
{
    cout << "Constructor with multiple argument is called" << endl;
}

int shape::volume()
{
    return len * wdt * hgt;
}

int main()
{
    cout << "inside main" << endl;
    //shape cube;
    ///cannot create above object as default constructor is defined as deleted
    shape cube1{5};
    shape cube3(2, 3, 4);
    cout << "after creating obj" << endl;
    cout << cube1.volume() << " " << cube3.volume() << endl;

    return 0;
}