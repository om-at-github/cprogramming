//accept dimensions of cylinder and print the surface area and volume.

#include<stdio.h>
int main()
{
 float r,h;
 float surface_area,volume;
 printf("   r:\t");
 scanf("%d",&r);
 printf("   h:\t");
 scanf("%d",&h);
 surface_area=2*3.14*r*(r+h);
 printf("surface area of cylinder=%f",surface_area);
 volume=3.14*r*r*h;
 printf("\nvolume of cylinder=%f",volume);
}
