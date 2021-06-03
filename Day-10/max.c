// maximum element 
#include<stdio.h>
int main()
{
	int n,i,max;
	scanf("%d",&n);
	int a[n];
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
	max=a[0];
	for(i=0;i<n;i++)
	{
		if(a[i]>max)
			max=a[i];
	}
	printf("maximum element in an array is:%d",max);
	return 0;
}
	
