//write a program which accepts a number n and displays each digit in words.

#include<stdio.h>
int main()
{
	int number,digit;
	printf("enter the number :");
	scanf("%d",&number);
	while(number>0)
	{
		digit=number % 10;
		number=number/10;
		switch(digit)
		{
			case 0:
				printf("zero");
				break;
			case 1:
				printf("one");
				break;
			case 2:
		    	printf("two");
			    break;
			case 3:
			    printf("three");
			    break;
			case 4:
			    printf("four");
			    break;
		}
	}
}
