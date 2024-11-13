//write a menu driven program to perfrom the following operation on m*n matrix.
// 1. find sum of non diagonal elements of matix.
//2. find sum of all odd numbers of matrix.

#include<stdio.h>
int main()
{
	int i,j,sum=0,rows[3],column[9],odd_number,m,n,number;
	
	printf("enter the column :");
	scanf("%d",&column);
	
	printf("enter the m");
	scanf("%d",&m);
	
	printf("enter the n");
	scanf("%d",&n);
	
	number=m*n;
	printf("number=%d",number);
	
		if(number % 2 == 1)
		{
			printf("odd number=%d",odd_number);
		}
		
		for(i=0;i<9;i++)
		{
			column[9]=number;
			printf("%d",column);
		}
		
		
	
}
