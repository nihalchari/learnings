#include "PersonClass.hpp"


template<typename T>
T Max(T a, T b)
{
    return (a>b ? a : b);
}

template<typename T1, typename T2>
void display(T1 a, T2 b)
{
    cout << a <<" " << b << endl;
}


int main()
{
    cout << Max<int>(10, 20) <<endl;
    cout << Max(1, 11)<<endl;
    cout << Max<char>('A', 'B') <<endl;
    cout << Max('c','d') <<endl;
    cout << Max<float>(1.1, 2.2)<<endl;
    cout << Max(3.3+2.2, 4.4)<<endl;

    person Amar{"Amar", 30};
    person Antony{"Anthony", 35};
    person P = Max(Amar, Antony);
    cout << P.name << "is elder\n"; 

    display(50, 'q');
    display("C string", string("C++ string"));

    return 0;
}