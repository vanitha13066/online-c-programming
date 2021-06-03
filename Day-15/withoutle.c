// calculate the length of a string 
//without using string handling function
#include<stdio.h>
int main()
{
	char s1[50]; //apssdc
	int len=0,i;  //len=0
	gets(s1);
	for(i=0;s1[i]!='\0';i++) //i='\0' '\0'!='\0'(F)
	{
		len=len+1; // 1+1=2+1=3+1=4+1=5+1=6
	}
	printf("String length is:%d",len);
}
