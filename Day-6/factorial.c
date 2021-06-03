//factorial=5
// 1......5=1*2*3*4*5=120
// 5*4*3*2*1=120
#include<stdio.h>
int main()
{
	int i,n,fact=1;    //n=5
	printf("Enter any number:"); //5
	scanf("%d",&n);
	for(i=1;i<=n;i++) // 4<=5(T)
	{
		fact=fact*i;  //1*1=1  1*2=2 2*3=6 6*4=24 24*5=120
	}
	printf("factorial=%d",fact);
	return 0;
}
