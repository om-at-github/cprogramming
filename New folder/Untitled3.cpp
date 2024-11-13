#include<stdio.h>
int main()
{
	int x,y,product=0,c;
	printf("enter the x and y :");
	scanf("%d%d",&x,&y);
	
	while(y!=0)
	{
		x=product++;
		y=product;
		y--;
	}
	printf("%d",c);
}
