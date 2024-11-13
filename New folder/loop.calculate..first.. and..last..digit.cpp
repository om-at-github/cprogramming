// write a program to display multiplication of two input numbers without using * operator

#include<stdio.h>
int main()
{
	int n,m,sum=0;
	printf("enter the n");
	scanf("%d",&n);
	printf("enter the n");
	scanf("%d",&m);
	while(m+n)
	{
		n=n % 10;
		sum=m+ n;
		
	}
	printf("sum of firstdigit and lastdigit=%d",sum);
} 
