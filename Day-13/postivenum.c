#include<stdio.h>
void readarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}	
void printarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void pos_no(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]>0)
			printf("%d ",a[i]);
	}
}
void neg_no(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		if(a[i]<0)
			printf("%d ",a[i]);
	}
}
int main()
{
	int n;// array size
	printf("Enter array size:\n");
	scanf("%d",&n);
	int a[n]; //array name
	printf("Enter the elements into an array:\n");
	readarray(a,n);
	printf("Printing the elements:\n");
	printarray(a,n);
	printf("\nPositive numbers are:");
	pos_no(a,n);
	printf("\nNegative numbers are:");
	neg_no(a,n);
}
