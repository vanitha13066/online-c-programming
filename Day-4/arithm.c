#include<stdio.h>
int main()
{
	int a,b,choice;
	printf("Enter a and b:");
	scanf("%d%d",&a,&b);
	printf("1.for sum\n 2.for sub\n 3.for,mul\n 4.for div\n 5.for mod\n");
	printf("Enter your choice:");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1: printf("sum=%d",a+b);
		break;
		case 2: printf("sub=%d",a-b);
		break;
		case 3: printf("mul=%d",a*b);
		break;
		case 4: printf("div=%d",a/b);
		break;
		case 5: printf("mod=%d",a%b);
		break;
		default:printf("Enter valid choice");
	}
	return 0;
}
	
	
