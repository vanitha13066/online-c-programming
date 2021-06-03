// printing natural numbers 
#include<stdio.h>
int main()
{
	int n,i=1;
	scanf("%d",&n);
	do{
		printf("%d ",i); //2 3 4 5
		i++;  //3 4 5...10 11
	}while(i<=n); //11<=10(T)
	return 0;
}
