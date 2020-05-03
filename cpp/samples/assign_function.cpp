#include<iostream>

using namespace std;

using FunctionPointer = std::function<void(int)>


void print(int i){

	cout << i << endl;
}


int main(){

	FunctionPointer fun1;
	fun1 = print();
	fun1(10);
	return 0;
}




