//Logical : &&, || ,!
#include<stdio.h>
int main()
{
	int a=20,b=45,res,res1;
	res=(a==b)&&(a>b);
	res1=!(a==b);
	printf("for(%d==%d)&&(%d>%d):the output is:%d\n",a,b,a,b,res);
	printf("for(%d==%d)||(%d>%d):the output is:%d\n",a,b,a,b,res);
	printf("for !(%d==%d),the output is:%d\n",a,b,res1);
	return 0;
}

