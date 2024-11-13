//write a function ... write a function is prime which accepts an integer as parameter and returns 1 if the number 
// is prime and 0 otherrwise .use this function in main to dispaly the frist 10 prime numbers,.

#include<stdio.h>
int checkprimenum(int n);
int main()
{
	int i=2,m=0,flag;
	while(m=10){
		flag = checkprimenum(i);
		if (flag == 1){
			m++;
			printf("%d",i);
		}
	}
	i++;
}

int checkprimenum(int n)
{
	int m,flag=1;
	for(m=2;m<=n;++m){
		if(n % m ==0){
			flag = 0 ;
			return 0;
			
		}
	}
}
