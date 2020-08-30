#include<iostream>
#include<type_traits>
using namespace std;

class NonTrivial
{
    public:
    NonTrivial(){val=100;}
    ~NonTrivial(){std::cout << "NonTrivial destructor\n";}

    private:
    int val;

};

// template<typename T1, typename T2=float>
template<typename T1,  typename T2 = float ,typename = std::enable_if_t<std::is_trivially_destructible<T1>::value>, typename = std::enable_if_t<std::is_trivially_destructible<T2>::value>>
class Myclass
{
    // static_assert(std::is_trivially_destructible<T1>::value, "not trivially destructile");
    public:
    Myclass(){};
    Myclass(T1 x, T2 y):data(x),fdtat(y){}
    ~Myclass()=default;

    void getData(){std::cout << data << std::endl << fdtat << std::endl;}
    private:
    T1 data;
    T2 fdtat;
};


int main()
{
    std::cout << std::is_trivially_destructible<int>::value << std::endl;
    std::cout << std::is_trivially_destructible<NonTrivial>::value << std::endl;
    Myclass<int> obj(121, 44.6);
    obj.getData();
    Myclass<NonTrivial> obj1;
    
    return 0;
}