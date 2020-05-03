
#include <iostream>
#include <string>

using namespace std;

/*
 * Complete the timeConversion function below.
 */
string timeConversion(string s)
{

    std::string::reverse_iterator itr;
    itr = s.rbegin();
    itr++;

    if (*itr == 'A')
    {
        string temp;
        temp.push_back(s[0]);
        temp.push_back(s[1]);

        if (std::stoi(temp) == 12)
        {
            s[0] = '0';
            s[1] = '0';
        }
    }

    if (*itr == 'P')
    {
        int hour = 12;
        string temp;
        temp.push_back(s[0]);
        temp.push_back(s[1]);

        if (std::stoi(temp) != 12)
        {
            hour = hour + std::stoi(temp);
            temp = to_string(hour);
            s[0] = temp[0];
            s[1] = temp[1];
        }
    }
    s.pop_back();
    s.pop_back();
    return s;
}

int main()
{
    string s = "07:40:03AM";
    string result = timeConversion(s);
    std::cout << result << "\n";

    return 0;
}