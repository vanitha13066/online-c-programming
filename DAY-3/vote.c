//write a program to check whether
 //a person is eligible for vote or not
#include<stdio.h>
int main()
{
	int age;
	printf("Enter your age:");
	scanf("%d",&age);
	if(age>=18)//12>=18(False)
	{
		printf("Eligible for vote");
	}
	else
	{
		printf("Not Eligible for vote");
	}
	return 0;
}
