#include <iostream>
using namespace std;

class shape
{

public:
    shape(int val);
    shape(int l, int w, int h);

    ///@note name ambiguity with parameterized default constructor
    ///In current scenario if above constructor is parameterized
    ///for eg shape(int l=1, int w=1, int h=1);
    /// it will throw " call of overloaded ‘shape(<brace-enclosed initializer list>)’ is ambiguous"
    /// upon creating "shape cube1{5}" object as it will not understand either to call
    /// 1st constructor with only one arument that is provided or call
    /// 2nd contructor taking rest parameter as default

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
    shape cube1{5};
    shape cube2(3);
    shape cube3(2, 3, 4);
    cout << "after creating obj" << endl;
    cout << cube1.volume() << " " << cube2.volume() << " " << cube3.volume() << endl;

    ///shape cube;

    ///attempt to create above object will throw compliation error as,
    /// compiler will not supply default constructor because user defined constructor is provided
    ///hence it is duty to programmer to provide default constructor as well

    return 0;
}

/**************************************************END*******************************/

#if 0
class shape
{

public:
    shape(){};
    shape(int val);

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

int shape::volume()
{
    return len * wdt * hgt;
}

int main()
{
    cout << "inside main" << endl;
    shape cube1{5};
    shape cube2(3);
    cout << "after creating obj" << endl;
    cout << cube1.volume() << " " << cube1.volume() << endl;

    shape cube;
    cout << cube.volume() << endl;

    return 0;
}

#endif
