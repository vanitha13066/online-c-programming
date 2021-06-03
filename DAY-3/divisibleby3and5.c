//divisible by 3 and 5
//15
#include<stdio.h>
int main()
{
	int a;
	scanf("%d",&a);
	if(a%3==0 && a%5==0)
	{
		printf("divisible by both 3 and 5");
	}
	else
	{
		printf("not divisible by 3 and 5");
	}
	return 0;
}
