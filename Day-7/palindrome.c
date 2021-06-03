// 121=reverse=121
// number=reverse

#include<stdio.h>
int main()
{
	int n,rem,rev=0,t;
	scanf("%d",&n);
	t=n;
	while(n!=0)  //458!=0(T) 45!=0(T) 4!=0(T) 0!=0(F)
	{
		rem=n%10; //458%10=8  45%10=5  4%10=4
		rev=(rev*10)+rem;//(0*10)+8=8  (8*10)+5=85  85*10+4=854
		n=n/10;  // 458/10=45  45/10=4  4/10=0
	}
	if(rev==t) //121==121(T)
	{
		printf("Palindrome");
	}
	else
	{
		printf("Not palindrome");
	}
	return 0;
}
		
		
		



