#include<stdio.h>
void r_a(int a[][50],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void p_a(int a[][50],int m,int n)
{
	int i,j;
	for(i=0;i<m;i++)
	{
		for(j=0;j<n;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
int main()
{
	int m,n;
	printf("Enter row and column size:");
	scanf("%d%d",&m,&n);
	int a[m][n];
	printf("Enter the elements:\n");
	r_a(a,m,n);
	printf("Printing the matrix:\n");
	p_a(a,m,n);
	return 0;
}
