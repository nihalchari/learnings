#include <iostream>
#include "MyHeader.hpp"
#include "Temp.hpp"

int main()
{
    int input1 , i2;
    std::cout << "Hello World C++\n";
    // std::cin >> input1  >> i2;
    // std::cout << "input= "  << input << ".." << std::endl;

    int x = 4;
    x <<= 1;
    std::cout << "x= " << x << std::endl;
    // demo();
   

    // char ch;
    // char16_t char16;
    // char32_t char32;
    // wchar_t wide_char; //size depends on compiler
    // uint64_t int_64; 
    
    
    // auto a = 1 bitor 0;
    // auto b = 1 | 0;
    // std::cout << "a= " << a << std::endl << "b= " << b << std::endl;

    // bool status = true;
    // if (status)
    // {
    //     std::cout << "status = " << status << std::endl;
    // }

    // auto t = '1';
    // auto real_value = 1.2f;

    int arr[5] = {1, 2, 3, 4, 5};

   ///@brief range based for loop
    for (auto element : arr)
    {
        std::cout << element << std::endl;
    }

 return 0;
}



