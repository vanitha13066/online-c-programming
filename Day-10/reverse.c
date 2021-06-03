// 2 56 78 12
// 12 78 56 2
#include<stdio.h>
int main()
{
	int n,i;
	printf("Enter size:\n");
	scanf("%d",&n);
	int a[n];  
	printf("Enter elements into array:\n");
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	printf("Elements in reverse order:\n");
	for(i=n-1;i>=0;i--)
	{
		printf("%d ",a[i]);
	}
	return 0;
}
	
	
