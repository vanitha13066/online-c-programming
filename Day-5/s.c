#include<stdio.h>
int main()
{
	int a=7;
	//scanf("%d",&a);
	printf("Integer size is %d",sizeof(a));
	float b=5.66;
	printf("\nfloat size is %d\n",sizeof(b));
	char grade='c';
	printf("\ncharacter size is %d\n",sizeof(grade));
	return 0;
}
