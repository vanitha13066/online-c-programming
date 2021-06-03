//458467---number
// 67467--- 5
//digits count=5
#include<stdio.h>
int main()
{
	int n,count=0;
	scanf("%d",&n); //367
	while(n!=0) //367!=0(T) 3!=0(T) 0!=0(F)
	{
		count=count+1;//0+1=1 1+1=2 2+1=3
		n=n/10; //367/10=36   36/10=3 3/10=0 
	}
	printf("digits count=%d",count);
	return 0;
}
		
		
	

