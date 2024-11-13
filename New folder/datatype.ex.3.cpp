//write a c program to check number even or odd.

#include<stdio.h>
int main()
{
	int number;
	printf("enter the number\t");
	scanf("%d",&number);
	if(number % 2==0){
		printf("even number=%d",number);
	}
	else{
		printf("odd number=%d",number);
	}
}
