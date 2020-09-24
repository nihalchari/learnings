#include <iostream>
#include <set>

using namespace std;

int checksequence(std::string str);
int main()
{
    std::set<int> i = {1, 2, 3, 4, 4, 5};
    i.erase(i.find(4));

    std::string str = "aaabb";

    auto x = checksequence(str);
    std::cout << "x = " << x << std::endl;
    return 0;
}

int checksequence(std::string str)
{

    auto size = str.size();
    int i = 0;
    int count = 0;
    while (i <= size)
    {
        if (str[i] == str[i + 1])
        {
            while (str[i] == str[i + 1] && (i <= size))
            {
                ++i;
            }

            if (i == size || str[i] != str[i + 1])
            {
                ++count;
                ++i;
            }
        }

        // else if (str[i] < str[i + 1])
        // {
        //     ++i;
        // }
        // else
        // {
        //     ++i;
        // }
    }

    return count;
}