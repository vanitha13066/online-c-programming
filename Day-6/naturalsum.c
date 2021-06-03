// 1 to 10
//sum=55
#include<stdio.h>
int main()
{
	int i,sum=0;
	for(i=1;i<=10;i++) //10<=10(T)  
	{
		sum=sum+i; //0+1=1 1+2=3 3+3=6  ...55
	}
	printf("sum=%d",sum);
	return 0;
}
		
