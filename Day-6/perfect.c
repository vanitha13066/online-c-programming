// perfect number
//factors sum=given number
//6= 1 2 3 6= 1 2 3=
     // 1+2+3=6
#include<stdio.h>
int main()
{
	int i,fsum=0,n;  //n=6
	printf("Enter any number:"); //6
	scanf("%d",&n);
	for(i=1;i<n;i++)  // 6 6<6(F)
	{
		if(n%i==0) //6%5(F)
		{
			printf("%d ",i);
			fsum=fsum+i; // 1+2=3 3+3=6 
		}
	}
	if(fsum==n) // 6==6(T)
	{
		printf("\nPerfect number");
	}
	else
	{
		printf("Not perfect number");
	}
	return 0;
}
	
	
	
	
	
	
