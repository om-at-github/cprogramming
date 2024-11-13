//write a C program to find maximum of two numbers using conditional operators.

#include<stdio.h>
int main()
{
	int a,b;
	printf("enter two number\t");
	scanf("%d%d",&a,&b);
	if(a>b){
		printf("maximum number=%d",a);
	}
	else if(b>a){
		printf("maximum number=%d",b);
	}
}
