// 80-100 -->A Grade
// 60-79 -->B Grade
// 35-59 -- C Grade
// below 35 -- Fail
#include<stdio.h>
int main()
{
	int m;
	printf("Enter your marks");
	scanf("%d",&m);
	if(m<=100)   //79
	{
		if(m>=80 && m<=100)
		{
			printf("A Grade");
		}
		else if(m>=60 && m<=79)
		{
			printf("B Grade");
		}
		else if(m>=35 && m<=59)  //t
		{
			printf("C Grade");
		}
		else
		{
			printf("Fail");
		}
	}
		return 0;
}
	
