#include<stdio.h>
int main()

{
	int number,i=0;
	printf("enter the number:\t");
	scanf("%d",&number);
	number++;
	while(number != i)
	{
		if(i % 2 == 0){
		
		printf("even=%d\t\0",i);
		}
		i++;
	}
	return 0;
}
