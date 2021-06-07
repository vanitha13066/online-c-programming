#include<stdio.h>
#include<stdlib.h>
#include<string.h>
struct student
{
	char name[50];
	int rollno;
	int marks;
};
int main()
{
	struct student student1;
	printf("Enter name");
	//scanf("%s",student1.name);
	printf("enter student rollnumber");
	scanf("%d",&student1.rollno);
	printf("Enter marks");
	scanf("%d",&student1.marks);
	printf ("student name %d",student1.marks);
	printf("student rollno %d",student1.rollno);
	
	return 0;
}

	
