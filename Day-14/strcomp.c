//strcmp()
#include<stdio.h>
#include<string.h>
int main()
{
	char s1[50]; 
	char s2[50];  
	printf("Enter s1:");
	gets(s1);
	printf("Enter s2:");
	gets(s2);
	printf("%d",strcmp(s1,s2));
	if(strcmp(s1,s2)==0)
		printf("\nTwo Strings are equal");
	else
		printf("\nNot equal");
	return 0;
}
