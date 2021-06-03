// multiplication table printing
// 9
// 9 x 1 = 9
// 9 x 2= 18
 //    . 
 //    .
// 9 x 10 =90
#include<stdio.h>
int main()
{
	int i,n;
	printf("Enter number:");
	scanf("%d",&n);  //5  
	for(i=1;i<=10;i++) // 11 11<=10(F)
	{
		printf("%d x %d = %d\n",n,i,n*i);
	}
	return 0;
	
}
