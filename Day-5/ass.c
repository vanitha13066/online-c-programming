//Assignment : =,+=,-=,*=,/=,%=
#include<stdio.h>
int main()
{
	int a=5;  
	int b=a;  
	b+=a; 
	printf("value is:%d\n",b);
	b-=a;
	printf("value is:%d\n",b);
	b*=3;
	printf("value is:%d\n",b);
	b/=a;   
	printf("value is:%d",b);
	return 0;
}
