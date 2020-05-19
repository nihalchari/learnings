#include<iostream>

float add(float num1, float num2)
{
    return num1 + num2;
}

float div(float num1, float num2)
{
    return num1/num2;
}

void print_result(std::string operation, float res)
{
    std::cout << operation << " res= " << res << std::endl;
}


int main()
{
    float num1, num2, add_res, div_res;

    std::cout << "enter two nums\n";
    std::cin >> num1 >> num2;
    add_res = add(num1 ,num2);
    div_res = div(num1, num2);
    print_result("addition", add_res);
    print_result("division", div_res);
    return 0;
}

