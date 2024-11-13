// write a program to calculate sum of digits of a given input number.

#include<stdio.h>
int main()
{
	int number,sum=0,remainder,temp;
	printf("enter the number  :");
	scanf("%d",&number);
	temp = number;
	while(number>0)
	{
		remainder = number % 10;
		number = number / 10;
		sum = sum + remainder;
	}
	printf("sum of digits of %d = %d\n",temp,sum);
	return 0;
}
