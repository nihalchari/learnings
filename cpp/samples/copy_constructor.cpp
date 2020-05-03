#include<iostream>

using namespace std;

class MyClass{
	public:

	MyClass(){};

	MyClass(int data){

		m_data=data;
	};

	MyClass(const MyClass& other) = delete;

void get_data(){
		cout << m_data << endl;
	}

	 int m_data;
};


int main(){

	MyClass obj1(520);

	MyClass obj2;

	obj2=obj1;

	obj2.get_data();

	return 0;

}









