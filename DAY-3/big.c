//biggest number
//34 
//89  ---- 89 is the big number
//78
//34 89 78
#include<stdio.h>
int main()
{
	int a,b,c;
	scanf("%d%d%d",&a,&b,&c);
	if(a>b && a>c)//34>89(F) && 34>78(F)
	{
		printf("%d is big",a);
	}
	else if(b>c) //89>78(T)
	{
		printf("%d is big",b);
	}
	else
	{
		printf("%d is big",c);
	}
	return 0;
}
	
	
