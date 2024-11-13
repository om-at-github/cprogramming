//write a program to calculate length of string without using standard funtion.

#include<stdio.h>
int main()
{
	char str[100];
	int i,length=0;
	printf("enter the string :");
	scanf("%d",&str);
	
		for(i=0;str[i]!=10;i++)
	    {
			length++;
	
	}
	printf("length of input string=%d",length);
	return 0;
} 
