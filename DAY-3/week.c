#include<stdio.h>
int main()
{
	int n;  //4
	scanf("%d",&n);
	if(n==0)  //4==0(False)
	{
		printf("SUNDAY");
	}
	else if(n==1)  //1==4(FALSE)
	{
		printf("MONDAY");
	}
	else if(n==2)  //2==4(FALSE)
	{
		printf("TUESDAY");
	}
	else if(n==3)//3==4(FALSE)
	{
		printf("WEDNESDAY");
	}
	else if(n==4)//4==4(True)
	{
		printf("THURSDAY");
	}
	else if(n==5)
	{
		printf("FRIDAY");
	}
	else if(n==6)
	{
		printf("SATURDAY");
	}
	return 0;
}
