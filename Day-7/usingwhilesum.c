// 1 to 10 ----// sum=55
#include<stdio.h>
int main()
{
	int i,sum=0;
	i=1;
	while(i<=10)
	{
		sum=sum+i;
		i++;
		//printf("sum=%d\n",sum);
	}
	printf("sum=%d",sum);
	return 0;
}
