#include<iostream>
#include "my_math/add.hpp"
#include "my_math/div.hpp"
#include "my_print/print.hpp"

int main()
{
    float num1, num2, add_res, div_res;

    std::cout << "enter two nums\n";
    std::cin >> num1 >> num2;
    add_res = add(num1 ,num2);
    div_res = div(num1, num2);
    print("addition", add_res);
    print("division", div_res);
    return 0;
}
