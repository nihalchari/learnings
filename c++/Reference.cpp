#include<iostream>
using namespace std;


///@brief Closely related but different from pointers
/// Reference is alias/synonym for existing variable


int main(void)
{
    int i=2020;

    int &j=i;

    std::cout << "i= " << i << "    j= " << j << std::endl;
    std::cout << "&i= " << &i << "\n&j= " << &j << std::endl;

    ++i;
    std::cout << "i= " << i << "    j= " << j << std::endl;
    ++j;
    std::cout << "i= " << i << "    j= " << j << std::endl;    


    ///@note reference to const not allowed
    //   int &x =5;   
         
    const int & k =21;           
    std::cout << "k= " << k << std::endl;  
      

      const int &y = i + k;
    std::cout << "y= " << y << std::endl;    

    return 0;
}




