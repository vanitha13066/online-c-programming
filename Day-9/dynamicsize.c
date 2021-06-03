#include<stdio.h>
int main()
{
	int a[5]; 
	int i;
	// reading each element in an array
	printf("Enter 5 elements:\n");
	for(i=0;i<5;i++)
	{
		scanf("%d",&a[i]);
	}
	//display each element in an array
	printf("printing 5 elements:\n");
	for(i=0;i<5;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
