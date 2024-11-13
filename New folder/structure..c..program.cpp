//display a program to accept a one student delites and display(structure).

#include<stdio.h>
#include<string.h >
struct student{
	int roll_no;
	char name [100];
	int marks[5];
	int avg=0;
};
int main()
{
	student s1;
	int i,sum=0;
	printf("enter the name of student  :");
	gets(s1.name);
	
	printf("enter roll_no  :");
	scanf("%d",&s1.roll_no);
	
	for(i=0;i<5;i++)
	{
		printf("enter the marks of subject  :");
		scanf("%d",&s1.marks[i]);
		sum=sum+s1.marks[i];
	}
	s1.avg=(sum/500)*100;
	
	//display into a student.
	
	printf("name=%s",s1.name);
	printf("roll_no=%d",s1.roll_no);
	
	printf("marks of student");
	
	for(i=0;i<5;i++)
	{
	printf("%d\t",s1.marks[i]);
	}
	printf("\naverage-%d",s1.avg);
}
