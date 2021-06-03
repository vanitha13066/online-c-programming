//input: 1 10
//output: 2 3 5 7
#include<stdio.h>
int main()
{
	int sr,er,i,j;
	printf("Enter start and end range:");
	scanf("%d%d",&sr,&er);
	for(i=sr;i<=er;i++) 
	{
		int count=0;
		for(j=1;j<=i;j++) 
		{
			if(i%j==0) 
				count++;  
		}
		if(count==2) 
			printf("%d ",i);
	}
	return 0;
}
