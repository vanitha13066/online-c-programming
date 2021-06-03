//~ // 2 diagonals printing
//~ 1 2 3  //00 01 02
//~ 4 5 6  //10 11 12
//~ 7 8 9  //20 21 22

//~ 1   3  //00    02   // 3 3
  //~ 5    //   11
//~ 7   9  // 20   22
#include<stdio.h>
void r_arr1(int n,int m,int a[n][m])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			scanf("%d",&a[i][j]);
		}
	}
}
void pr_arr(int n,int m,int a[n][m])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
		printf("\n");
	}
}
void diagonals(int n,int m,int a[n][m])
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i==j || i+j==n-1)
				printf("%d ",a[i][j]);
			else
				printf("  ");
		}
		printf("\n");
	}
}
int main()
{
	int n,m;
	printf("Enter row size:");
	scanf("%d",&n);
	printf("Enter column size:");
	scanf("%d",&m);
	int a[n][m];
	r_arr1(n,m,a);
	//printf("%d\n",n);
	pr_arr(n,m,a);
	diagonals(n,m,a);
	return 0;
}
