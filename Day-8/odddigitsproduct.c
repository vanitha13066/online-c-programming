//~ //384927
//~ // odd digits: 
//~ output:  odd digits=397
         //~ odd digits product=189
         
         
   
#include<stdio.h>
int main()
{
	int n,oddsum=0,r;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==1)
		{
			printf("%d ",r);
			oddsum=oddsum+r;
		}
	n=n/10;
	}
	printf("\nodd digits sum=%d",oddsum);
	return 0;
}
