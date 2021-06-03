// 12 34 12 56 78 89 23 
// even numbers are: ............
// even numbers sum=....
//odd numbers are: ......
// odd numbers sum=....
#include<stdio.h>
int main()
{
	int i,n,esum,osum;
	esum=osum=0;
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
	printf("\nEven numbers are:");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==0)
		{
			printf("%d ",a[i]);
			esum=esum+a[i];
		}
	}
	printf("\nEven numbers sum is:%d",esum);
	printf("\nOdd numbers are:");
	for(i=0;i<n;i++)
	{
		if(a[i]%2==1)
		{
			printf("%d ",a[i]);
			osum=osum+a[i];
		}
	}
	printf("\nOdd numbers sum is:%d",osum);
	return 0;
}
	
