//strlwr()
#include<stdio.h>
#include<string.h>
int main()
{
	char s3[50];
	printf("Enter string in uppercase:");
	gets(s3);
	printf("%s",strlwr(s3));
}
