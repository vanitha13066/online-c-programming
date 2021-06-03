//6-- 1 2 3 6
//10 -- 1 2 5 10
#include<stdio.h>
int main()
{
	int i,n;  //6
	printf("Enter any number:");  //6
	scanf("%d",&n); // &6
	for(i=1;i<=n;i++) //5 6<=6(T)
	{
		if(n%i==0)// 6%6==0(F)
		{
			printf("%d ",i);  //1 2 3 6
		}
	}
	return 0;
}
    

