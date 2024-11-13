// write a c program to accept dimensions of a cylinder and diplay the surface area and volume of cylinder.
#include<stdio.h>
int main()
{
	float radius,height,surface_area,volume;
	printf("enter the values radius and height  ::");
	scanf("%f%f",&radius,&height);
	surface_area=2*(22/7)*radius*(radius+height);
	printf("surface_area of cylinder=%f\n",surface_area);
	volume=(22/7)*radius*radius*height;
	printf("volume of cylinder=%f",volume);
	return 0;
}
