//even digits in a number
#include<stdio.h>
int main()
{
	int n,r; //5638--68
	scanf("%d",&n);
	while(n!=0)//5638(T)563(T)56(T)5(T)0(F)
	{
		r=n%10;//5638%10=8 563%10=3 56%10=6 5%10=5
		if(r%2==0)//8%2(T) 3%2(F) 6%2(T) 5%2(f)
			printf("%d ",r);//8 6
	n=n/10;//5638/10=563 563/10=56 56/10=5 5/10=0
	}
	return 0;
}
	
		
		
		
