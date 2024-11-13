// write a c program to accept two numbers as a range anda display sum of all numbers between that range.

#include<stdio.h>
int main()
{
	int num1,numlast,sum=0;
	printf("enter the two number\t");
	scanf("%d%d",&num1,&numlast);
	
	while(num1<=numlast)
	{
		sum = sum + num1;
		printf("%d\t",num1);
		num1++;
		
		if(num1>numlast){
			printf("sum of all numbers between in range=%d\n",sum);
		}	
	}
}
