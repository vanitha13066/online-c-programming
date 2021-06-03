//input: apssdc
//output: frequency of 's' is:2
#include<stdio.h>
int main()
{
	char str[100],choice;
	int i,count=0;
	printf("Enter any String:");
	gets(str);
	printf("Enter the character to find frequency:");
	scanf("%c",&choice);
	for(i=0;str[i]!='\0';i++)
	{ //   s==s
		if(choice==str[i])
			count++; //1  2
	}
	printf("Frequency of '%c' is : %d",choice,count);
}
		
		
		
		
		
		
	
	
