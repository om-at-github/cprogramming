#include<stdio.h>
int main()
{
	int a,b,max;
	printf("enter two number = ");
	scanf("%d%d",&a,&b);
	max=a>b ? a:b;
	printf("maximum number = %d",max);
	return 0;
}
