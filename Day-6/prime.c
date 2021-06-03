// prime number:
// 3= 1 3 =factors count=2
// 7= 1 7  --2
//5 = 1 5 --2
// 11= 1 11---2
#include<stdio.h>
int main()
{
	int i,n,fcount=0;  //5
	printf("Enter any number:"); //5
	scanf("%d",&n);
	for(i=1;i<=n;i++)//6 6<=5(F)
	{
		if(n%i==0)// 5%5==0(F)
		{
			fcount=fcount+1;//0+1=1 1+1=2
		}
	}
	if(fcount==2)  //(2==2) (T) 
	{
		printf("Prime number");
	}
	else
	{
		printf("Not prime number");
	}
	return 0;
}
