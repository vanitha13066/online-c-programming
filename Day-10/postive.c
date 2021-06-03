// 4 2 6 7 -2 -1 3 6
// postive numbers are : 4 2 6 7 3 6
// Negative numbers are : -2 -1
#include<stdio.h>
int main()
{
	int i,n;
	printf("Array size:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Printing elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d",a[i]);
	}
	printf("\nPositive numbers are:");
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
			printf("%d ",a[i]);
	}
	printf("\nNegative numbers are:");
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
			printf("%d ",a[i]);
	}
	return 0;
}
	
	
	
	
	
	
	
