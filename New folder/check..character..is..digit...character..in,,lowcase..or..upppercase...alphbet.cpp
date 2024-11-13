//write a program  to check whether given character is a digit or a character in lawercase or uppercase alphabet.

#include<stdio.h>
int main()
{
	char ch;
	
	printf("enter the a character  :");
	scanf("%c",&ch);
	
	if(ch>='A' && ch<='Z')
	{
		printf("it is uppercase character");
	}
	else
	{
		printf("it is lowercase character");
	}
	return 0;
}
