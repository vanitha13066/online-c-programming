//34873=number
// sum of digits=25

#include<stdio.h>
int main()
{
	int n,sum=0,r;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		sum=sum+r;
		n=n/10;
	}
	printf("digits sum=%d",sum);
	return 0;
}
