#include<stdio.h>

void (*fp1)(void);
void (*fp2)(void)

void print1(){
	printf("one\n");
}

void print2(){
	printf("two\n");
}


void fun1(fp1, fp2){
}

int main()
	{
	fun1(print1,print2);
	return 0;
}



