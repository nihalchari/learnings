#include<iostream>
#include <assert.h> 
using  namespace std;


///@note constexpr will evaluate function at compile time, which is checked by static_assert
constexpr int divide(const int& a, const int& b)
{
  return a/b;
}


///@note since this this not marked as constexpr this is checked using assert at runtime
int add(const int& a, const int& b)
{
    ///@note can call constexpr function from non constexpr
    divide(a,b);

    return a+b;
}

constexpr int limitation(const int &a, const int& b)
{

    ///@note for and if statement inside consexpr fn are allowed from c++14 std 

    for(auto i =0u; i<5; ++i)
    {
        ///@note cannot call non constexpr function from constexpr
        // add(i,i);

        divide(i,i+1);
    }

    if(b != 0)
    {
        return a/b;
    }
  
}




int main(){

    int x=5;
    int z=1;

    // auto res = divide(6,0);
    
    add(x,z);

    static_assert(divide(6,2)==7, "incorrect result expected");
    
    assert(add(6,2)==8);

    limitation(8,0);
 
   return 0;
}