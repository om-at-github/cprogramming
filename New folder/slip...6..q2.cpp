//write a program to accept a string and then count the occurrences of a specific character of a string.

#include<stdio.h>
#include<string.h>
int main()
{
	 char str[12]="o";
	 char c;
	 int res=0;
	 
	 printf("enter the character:");
	 scanf("%c",&c);
	 
	 for(int i=0;i<strlen(str);i++)
	 {
	 	if(str[i]==c)
	 	res++;
	 	printf("occurence of %c=%d,c,res++\n");
	 }
	 return 0;
}
