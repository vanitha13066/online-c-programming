//vanitha
//VANITHA
#include<stdio.h>
int main()
{
	char ch[100];
	gets(ch);
	int i;
	for(i=0;ch[i]!='\0';i++)
	{
		ch[i]=ch[i]-32;
		printf("%c",ch[i]);
	}
}
		
