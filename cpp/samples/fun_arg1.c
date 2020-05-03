#include<stdio.h>


void add(int a,int b){
	printf("add=%d\n",a+b);
}

void sub(int a , int b){
        printf("sub=%d\n",a-b);
}



int main() {

				
	int a=5, b=3;
//	printf("Enter 2 nos\n");
//	scanf(&a,&b);
	add(a,b);
	sub(a,b);	
        return 0;
}
