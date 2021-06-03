//458 ---8
//854

#include<stdio.h>
int main()
{
	int n,rem,rev=0;
	scanf("%d",&n);
	while(n!=0)  //458!=0(T) 45!=0(T) 4!=0(T) 0!=0(F)
	{
		rem=n%10; //458%10=8  45%10=5  4%10=4
		rev=(rev*10)+rem;//(0*10)+8=8  (8*10)+5=85  85*10+4=854
		n=n/10;  // 458/10=45  45/10=4  4/10=0
	}
	printf("reverse=%d",rev);
	return 0;
}
		
		
		
