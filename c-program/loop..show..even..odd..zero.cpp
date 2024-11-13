//write a program to accept a number and count number of even ,odd, zero digits within that number.
//12234 -> event=3,odd=2,zero=0
#include<stdio.h>
int main()
{
	int number,even=0,odd=0,zero=0;
	printf("enter the number  :");
	scanf("%d",&number);
	while(number>0)
	{
		if(number==0)
		{
			zero++;
		}
		else if(number % 2==0)
		{
		even++;
		}
		else
		{		

			odd++;
		}
		number = number/10;
		
	}
	printf("\nzero=%d,\nodd=%d,\neven=%d",zero,odd,even);
	return 0;
}

