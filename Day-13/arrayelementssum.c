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
int sum(int a[],int n)
{
	int i,sum=0;
	for(i=0;i<n;i++)
	{
		sum=sum+a[i];
	}
	return sum;
}		
int main()
{
	int n,s;// array size
	printf("Enter array size:\n");
	scanf("%d",&n);
	int a[n]; //array name
	printf("Enter the elements into an array:\n");
	readarray(a,n);
	printf("Printing the elements:\n");
	printarray(a,n);
	s=sum(a,n);
	printf("\nsum=%d",s);
}
