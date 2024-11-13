//write a program that accept a number and prints its first digit.refer sample code 1 given 
//above.execute the program for different values.

#include<stdio.h>
int main()
{
	int number,val;
	printf("enter the number :");
	scanf("%d",&number);
	
	while(number>0)
	{
		val = number%10;
		number = number/10;
	}
	
	printf("number - %d",val);
	return 0;
}
