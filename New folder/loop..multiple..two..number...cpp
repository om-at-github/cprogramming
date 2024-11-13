//write a c program to display multiplication of two input numbers without  using * opertor.

#include<stdio.h>
int main()
{
	int num1,num2,answer=0,i;
	printf("enter the num1 and num2  :");
	scanf("%d%d",&num1,&num2);
	
	for(i=0;i<num2;i++){
		answer = answer + num1;
	}
	
	printf("enter the multiple=%d",answer);
}
