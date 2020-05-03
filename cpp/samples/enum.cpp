#include<iostream>

using namespace std;

enum Testservice {
	Example,
	Chatter,
};


void fun(Testservice s)
{
	
	if(s == Chatter)
	cout << "chatter";

	if(s == Example)
	cout << "Example";
	}

int main(){

	enum Testservice s;
	s=Example;
	fun(s);
	return 0;
}
