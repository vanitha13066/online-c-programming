// printing natural numbers 
#include<stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	do{
		printf("%d ",i); //1 
		i++;   //2
	}while(i>=n);  //2>=10(F)
	return 0;
}
