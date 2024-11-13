#include<stdio.h>
int main()
{
	int a,b,c,maximum_number;
	printf("enter the three number= ");
	scanf("%d%d%d",&a,&b,&c);
	maximum_number=a>b ;c>a; b>a;
	printf("maximum number=%d",maximum_number);
}
