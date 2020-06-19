#include <iostream>

using namespace std;

class A
{
private:
	int a;

public:
	friend class B;

	void print()
	{
		cout << a << endl;
	}
};

class B
{
public:
	void print()
	{
		class A a;
		a.a = 10;
		a.print();
	}
};

int main()
{
	class B b;
	b.print();
	class A a;
	a.print();
}
