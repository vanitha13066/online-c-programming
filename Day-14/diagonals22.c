#include<stdio.h>
void read(int a[][50],int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     {
   
     scanf("%d",&a[i][j]); 
  } 
 }  
}
void print(int a[][50],int n)
{
   int i,j;
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
     {
     printf("%d ",a[i][j]); 
  } 
  printf("\n");
 } 
}
void matrix(int a[][50],int n)
{
     int i,j;
    for(i=0;i<n;i++)
    {
     for(j=0;j<n;j++)
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
   int n;
   printf("enter n:\n");
   scanf("%d",&n);
   int a[n][n];
   printf("enter elements:\n");
   read(a,n);
   printf("elements in matrix:\n");
   print(a,n);
   printf("required matrix:\n");
   matrix(a,n);
   return 0;
}
