// 2 matix printing
#include<stdio.h>
void r_a(int a[][100],int m,int n)
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
void p_a(int a[][100],int m,int n)
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
	printf("Enter the elements into 1st matrix:\n");
	r_a(a,m,n);
	printf("Printing the 1st matrix:\n");
	p_a(a,m,n);
	int b[m][n];
	printf("Enter the elements into 2nd matrix:\n");
	r_a(b,m,n);
	printf("Printing the 2nd matrix:\n");
	p_a(b,m,n);
	return 0;
}
