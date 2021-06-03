//strupr()
#include<stdio.h>
#include<string.h>
int main()
{
	char s3[50];
	printf("Enter string in lowercase:");
	gets(s3);
	printf("%s",strupr(s3));
}
