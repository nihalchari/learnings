#include<iostream>
#include<iomanip>
using namespace std;

///@brief variable template
template <typename T>
constexpr T pi = 3.1415926535897932384626433832795;


///@brief variable template specialization
template<>
constexpr char pi<char> = 'p';

int main()
{
    cout << setprecision(13);
    cout << "float " << pi<float> << endl;
    cout << "double " << pi<double> << endl;
    
    cout << pi<int> << endl;
    cout << pi<char> << endl;
    return 0;
}