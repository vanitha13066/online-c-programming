//input:  welcome
//output: w e l c o m e
#include<stdio.h>
int main()
{
	char s[100];
	printf("Enter any string:");
	int i=0;
	gets(s);
	while(s[i]!='\0')
	{
		printf("%c ",s[i]);
		i=i+1;
	}
	return 0;
}
