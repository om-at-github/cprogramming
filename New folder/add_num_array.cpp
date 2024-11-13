#include<iostream>
using namespace std;

int main() {
	int arr[] = {1,2,3,4};
	int res[4],i ,sum =0;
	
	res[0]=arr[0];
	for(i=1;i<4;i++){
		sum =0;
		sum = arr[i] + res[i-1];
		res[i] = sum;
	}
	
	cout<<"the resultant array is :"<<"\n";
	cout<<"[ ";
	for(i=0;i<4;i++){
		cout<<res[i]<<" ";
	}
	cout<<"]";
}
