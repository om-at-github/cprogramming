//acccept temperatures in fahrenheit and print it in celsius and kelvin.

#include<stdio.h>
int main()
{
	float f,c,k;
	printf("enter the value f:\t");
	scanf("%d",&f);
	c=5.0/9*f*(f-32);
	printf("c=%f",c);
	k=c+273.15;
	printf("k=%d",k);
	
}
