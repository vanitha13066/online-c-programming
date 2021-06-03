//1 to 10-----
//product=....
#include<stdio.h>
int main()
{
	int i,product=1;
	for(i=1;i<=10;i++)  //1 2
	{
		product=product*i;  //1*1=1 1*2=2....
	}
	printf("product=%d",product);
	return 0;
}
