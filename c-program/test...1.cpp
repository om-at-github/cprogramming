//write a c program to accept dimensions length,breath ,height of a cuboids and 
//display surface area and volume .(hint: surface area =2(lb+lh+bh).volume=lbh .

#include<stdio.h>
int main()
{
	int l,b,h;
	int surface_area,volume;
	printf("enter the l: ");
	scanf("%d",&l);
	printf("enter the b: ");
	scanf("%d",&b);
	printf("enter the h: ");
	scanf("%d",&h);
	
	surface_area=2*(l*b+l*h+b*h);
	printf("surface_area=%d",surface_area);
	
	volume=l*b*h;
	printf("volume=%d",volume);
	
 } 

