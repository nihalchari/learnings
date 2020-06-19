#include <thread>
#include <map>
#include <iostream>

using namespace std;

class MyClass
{
public:
    MyClass(int i) : data(i)
    {
    }

    void getData()
    {
        cout << "data: " << data;
    }

private:
    uint32_t data;
};

void fun()
{
    thread_local uint32_t t_threadId;
    thread_local MyClass t_obj(5);

    t_obj.getData();
    std::map<uint32_t, MyClass> runtime;
}

void creat_thread()
{
    fun();
}

int main()
{
    std::thread tx(creat_thread);
    std::thread rx(creat_thread);

    tx.join();
    rx.join();
}
