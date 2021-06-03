#include<stdio.h>
int main()
{
	int sr,er,i,j;
	printf("Enter start and end range:");
	scanf("%d%d",&sr,&er);
	for(i=sr;i<=er;i++) 
	{
		int fsum=0;
		for(j=1;j<i;j++) 
		{
			if(i%j==0)//6%2==0(T)
				fsum=fsum+j;
		}
		if(i==fsum)
			printf("%d ",i);
	}
	return 0;
}
