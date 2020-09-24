#include "greatest_num.hpp"

int main()
{
    int a, b, c;
    cout << "Enter 3 nums" << endl;
    cin >> a >> b >> c;
    int val = greatest__num(a, b, c);
    cout << "Greatest num is: " << val << endl;
    return 0;
}