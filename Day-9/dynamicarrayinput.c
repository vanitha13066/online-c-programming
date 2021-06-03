#include<stdio.h>
int main()
{
	int size,i; //10 
	printf("Enter no of elements:\n");
	scanf("%d",&size);
	int a[size];  //a[10]
	printf("Enter elements into an array:\n");
	for(i=0;i<size;i++)
	{
		scanf("%d",&a[i]);
		printf("%d\n",a[i]);
	}
	printf("Printing elements:\n");
	for(i=0;i<size;i++)
	{
		printf("%d\n",a[i]);
	}
	return 0;
}
	
