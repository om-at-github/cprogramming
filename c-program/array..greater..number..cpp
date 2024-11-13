
//write a program array find a greater number in array.

#include<stdio.h>
int main()
{
	int a[10],n,max=0,i;
	printf("enter no of array\n");
	scanf("%d",&n);
	
	for(i=0;i<n;i++){
		scanf("%d",&a[i]);
		if(a[i]>max){
			max=a[i];
		}
	}
	
	printf("the maximum value of array is:%d",max);	
}
