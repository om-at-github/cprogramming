// write a c program to generate following triangle up to n lines.
// A B C
// A B 
// A

#include<stdio.h>
int main()
{
	int rows,i,j;
	char n='A';
	printf("enter the rows :");
	scanf("%d",&rows);
	for(i=n;i<=n;i++)
	{
		n='A';
	
		for(j=rows;j<rows;j++)
		{
			printf("%d",n);
		}
	}
	return 0;
}
