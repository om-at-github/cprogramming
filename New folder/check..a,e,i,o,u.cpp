#include<stdio.h>
int main()
{
	char character;
	printf("enter the character  :");
	scanf("%c",&character);
	if(character=='a' || character=='i' || character=='o' || character=='u' || character=='e' )
	{
		printf("vowels");
	}
	else{
		printf("consonant");
	}
}

