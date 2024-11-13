#include<stdio.h>
void nextchar(char,int);
int main()
{
	int n;
	char ch;
	printf("enter the charcter");
	scanf("%c",&ch);
	
	printf("how many next charcter");
	scanf("%d",&n);
}
void nextchar(char ch,int n)
{
	int i;
	for(i=1;i<=n;i++){
		printf("%c",&ch+i);
	}
}
