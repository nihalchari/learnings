#include <iostream>
#include <string>
#include<ostream>
using namespace std;

class person
{
    public:
    string name;
    int age;

    
    person(string _name, int _age):name(_name),age(_age){};

    bool operator > (const person& p) const
    {
        return age > p.age;
    }

};