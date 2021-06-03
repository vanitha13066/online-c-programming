//strcat()
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50];
	printf("Enter s1:");
	gets(s1);
	char s2[50];
	printf("Enter s2:");
	gets(s2);
	strcat(s2,s1);
	puts(s1);
	puts(s2);
	return 0;
}
	
