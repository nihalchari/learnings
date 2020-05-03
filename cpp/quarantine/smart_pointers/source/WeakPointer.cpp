#include<iostream>
#include<memory>

using namespace std;

class B;

class A
{
    shared_ptr<B> b_ptr;
    //weak_ptr<B> b_ptr;
    public:
    A(){cout << "A Constructor\n";}
    ~A(){cout << "A Destructor\n";}

    void setB(shared_ptr<B> &b)
    {
        b_ptr = b;
    }

};



class B
{
    shared_ptr<A> a_ptr;
    //weak_ptr<A> a_ptr;

    public:
    B(){cout << "B Constructor\n";}
    ~B(){cout << "B Destructor\n";}

    void setA(shared_ptr<A> &a)
    {
        a_ptr =a;
    }

};




int main()
{
    shared_ptr<A> a (new A);
    shared_ptr<B> b = make_shared<B>();
    a->setB(b);
    b->setA(a);
    return 0;   

    /// destructor of class A and B are not called means heap memory is not freed as there is circular linkage
    /// change one of the shared_ptr in class to weak_ptr
}