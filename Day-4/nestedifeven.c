#include<stdio.h>
int main()
{
	int n;
	printf("Enter any number:");
	scanf("%d",&n);
	if(n%2==0)
	{
		if(n>10)
		{
			printf("%d is even number and greaterthan 10",n);
		}
		else
		{
			printf("%d is even number and lessthan 10",n);
		}
	}
	else
	{
		printf("%d is odd number",n);
	}
	return 0;
}
