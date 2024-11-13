//write a c program to find demonstrate  the working of arithmetic opertors.

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the value a\t:");
	scanf("%d",&a);
	printf("enter the value b\t:");
	scanf("%d",&b);
	c=a+b;
	printf("a+b=%d\n",c);
	c=a-b;
	printf("a-b=%d\n",c);
	c=a*b;
	printf("a*b=%d\n",c);
	c=a%b;
	printf("a%b=%d",c);
	return 0;
}
