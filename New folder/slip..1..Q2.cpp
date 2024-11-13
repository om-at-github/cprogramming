//create a structure employee(id,name,salary).accept detail of n employees and write a menu driven program to perfrom 
//the following operation.Search employee by id display all employees .

#include<stdio.h>
struct employee{
	int id[50];
	char name[10];
	int salary;
};
int main(employee)
{
	int id,i;
	printf("enter the id ::");
	scanf("%d",&id);
	printf("%d",id);
	for(i=0;i<id;i++)
	{
		if(i==id){
			printf("%d",id);
		}
	}	
}
int display(char name)
{
	
	int i;
	for(i=0;i<10;i++){
		if(i==name){
			printf("enter the name=%c",name);
		}
	}
}
