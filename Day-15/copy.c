//without using string function 
#include<stdio.h>
int main()
{
	char name1[100],name2[50];
	printf("Enter name1:");
	gets(name1);
	int i;
	for(i=0;name1[i]!='\0';i++)
	{
		name2[i]=name1[i];
	}
	printf("name1 is:%s\n",name1);
	printf("name2 is:%s",name2);
}
	
