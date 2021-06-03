//~ // 1 2 3 4
//~ // 5 6 7 8
//~ ------------
   //~ 6 8 10 12
//~ -----------

#include<stdio.h>
void rearray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		scanf("%d",&a[i]);
	}
}
void prarray(int a[],int n)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]);
	}
}
void sumarray(int a[],int b[],int n,int m)
{
	int i;
	for(i=0;i<n;i++)
	{
		printf("%d ",a[i]+b[i]);
	}
}
int main()
{
	int n,m;
	scanf("%d",&n);
	int a[n];
	rearray(a,n);
	prarray(a,n);
	printf("\n");
	scanf("%d",&m);
	int b[m];
	rearray(b,m);
	prarray(b,m);
	printf("\naddition is:\n");
	sumarray(a,b,n,m);
	return 0;
}
