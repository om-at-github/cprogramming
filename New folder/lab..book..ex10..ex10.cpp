//

#include<stdio.h>
int main()
{
	int isperfectnum(int n){
		int sum=1;
		
		for(int i=2;i*i<=n;i++){
			if(n % i==0){
				if(i*i!=n)
				sum=sum+i;
			}
			if(sum==n &n!=1)
			return 1;
			else return 0;
		}
		
	}
	int main()
	{
		int n;
		printf("enter the number\n");
		scanf("%d",&n);
		if(isperfectnum(n)){
			printf("%d is a perfect number\n");
			else{
				printf("%d is a not perfect number");
			}
		return 0;
	}
}
