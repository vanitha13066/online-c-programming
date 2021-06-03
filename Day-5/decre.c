#include<stdio.h>
int main()
{
	int a=5;
	printf("%d\n",a--); // 5
	printf("%d\n",a);   // 5-1=4
	printf("%d\n",--a); //  4-1=3
	printf("%d\n",a);  //     3
	return 0;
}
