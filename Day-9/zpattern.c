//~ z z z z z
      //~ z
    //~ z            
  //~ z 
//~ z z z z z  
11 12 13 14 15  // i==1 || i==n || i+j==n+1
		 24 
	  33 
   42 
51 52 53 54 55    i+j==n+1=5+1=6

#include<stdio.h>
int main()
{
	int i,j,n;
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		for(j=1;j<=n;j++)
		{
			if(i==1 || i==n || (i+j)==n+1)
			{
				printf("Z ");
			}
			else
			{
				printf("  ");
			}
		}
		printf("\n");
	}
	return 0;
}






