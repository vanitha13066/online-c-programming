#include<stdio.h>
int main()
{
	int a=7;
	printf("%d\n",a++); //5
	printf("%d\n",a);   // 6
	printf("%d\n",++a); //6+1=7
	printf("%d\n",a);  //7
	return 0;
}
