//AM=(a+b)/2,HM=a*b/(a+b)


#include<stdio.h>
int main()
{
    int a,b,AM,HM;
	
	printf("enter the a=\t");
	scanf("%d",&a);
	printf("enter the b=\t");
	scanf("%d",&b);
	AM=(a+b)/2;
	printf("AM=%d\n",AM);
	HM=a*b/(a+b);
	printf("HM=%d\n",HM);
}
