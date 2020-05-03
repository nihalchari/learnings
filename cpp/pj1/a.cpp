
#include "a.h"
#include <iostream>
using namespace std;
int a::y = 8;
void a::print()
{
    cout << "Hello\n"
         << a::y++ << a::y << endl;
}
