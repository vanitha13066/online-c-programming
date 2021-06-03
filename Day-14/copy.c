//strcpy()
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50]; //original string
	char s2[50];  // result string
	printf("Enter s1:");
	gets(s1);
	strcpy(s2,s1);// (result,original)
	puts(s1);
	puts(s2);
}
	
