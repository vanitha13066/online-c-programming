// 2 5 6 7 1
// sum=21
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	printf("Enter array size:\n");
	scanf("%d",&n);
	int a[n];
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Printing the elements:\n");
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
		sum=sum+a[i];
	}
	printf("\nsum=%d",sum);
	return 0;
}
