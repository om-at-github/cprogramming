// write a c program to generate following triangle up to n lines.
// A
// A B
// A B C 

#include<stdio.h>
int main()
{
	int rows,i,j;
	char number='A';
	printf("enter the number of rows :");
	scanf("%d",&rows);
	
	for(i=1;i<=rows;i++)
	{
		number='A';
		
		for(j=1;j<=1;++j)
		{
			printf("%c",number);
			++number;
		}
		printf("\n");
	}
	return 0;
}
