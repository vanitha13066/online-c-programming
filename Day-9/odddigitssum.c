//~ // input: 376539
   //~ output:  37539
            //~ odd digits product=....
//~ //odd digits sum
#include<stdio.h>
int main()
{
	int n,product=1,r;
	scanf("%d",&n);
	while(n!=0)
	{
		r=n%10;
		if(r%2==1)  
		{
			printf("%d ",r);
			product=product*r;
		}
	n=n/10;
	}
	printf("\nodd digits product=%d",product);
	return 0;
}
		
	
