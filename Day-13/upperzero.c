//setting zero in upper triangular matrix.
// 1 2 3  // 00 01 02
// 4 5 6  // 10 11 12
// 7 8 9  // 20 21 22

// 1 0 0 
// 4 5 0
// 7 8 9
// i>=j    ..........%d
// "0"
#include<stdio.h>
void re_ar(int a[][50],int n,int m)
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
void pr_ar(int a[][50],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			printf("%d ",a[i][j]);
		}
	}
}
void upperzero(int a[][50],int n,int m)
{
	int i,j;
	for(i=0;i<n;i++)
	{
		for(j=0;j<m;j++)
		{
			if(i>=j)
				printf("%d ",a[i][j]);
			else
				printf("0 ");
		}
		printf("\n");
	}
}
int main()
{
	int n,m;
	scanf("%d%d",&n,&m);
	int a[n][m];
	re_ar(a,n,m);
	pr_ar(a,n,m);
	printf("\n");
	upperzero(a,n,m);
	return 0;
}




	
	
	
	
	
	
	
	
