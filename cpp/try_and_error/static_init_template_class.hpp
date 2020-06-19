#include <iostream>
using namespace std;


class Myclass
{
public:
    Myclass(){};
    int getData()
    {
        return data;
    }

    void setData()
    {
        data = 112;
    }

private:
    static int data;
};



int Myclass::data;

int main()
{
    Myclass obj;
//    cout << obj.getData() << endl;
    obj.setData();
//    cout << obj.getData() << endl;
    return 0;
}
