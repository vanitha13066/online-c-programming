// 1 to 10---- 
// skip 5.
// Continue: It continues the loop by skipping the current 
         //  iteration ,then it continues with next iteration
#include<stdio.h>
int main()
{
	int i;
	for(i=1;i<=10;i++) //5(T)
	{
		if(i==6 || i==8) // 5==5(T)
		{
			continue;
		}
	printf("%d ",i);
	}
	return 0;
}
