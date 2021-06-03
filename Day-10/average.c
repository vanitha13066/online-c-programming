// 1 2 3 4 5
// 1 2 3 4 5
// average
// 2 5 6 7 1
// sum=21
#include<stdio.h>
int main()
{
	int n,i,sum=0;
	float average;
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
	average=sum/n;
	printf("\nAverage=%.2f",average);
	return 0;
}
