//write a c program to find maximum of three numbers using logical operators.

#include<stdio.h>
int main()
{
	int a,b,c;
	printf("enter the three number\t");
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c){
		printf("maximum number=%d",a);
	} 
	else if(b>a && b>c){
		printf("maximum number=%d",b);
	}
	else if(c>a && c>b){
		printf("maximum number=%d",c);
	}
}
