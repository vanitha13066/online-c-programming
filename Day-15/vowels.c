#include<stdio.h>
int main()
{
	char s[50];
	int i,vc=0,cc=0;
	printf("Enter any string:");
	gets(s);
	for(i=0;s[i]!='\0';i++) // 
	{
		if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u')
		{
			vc++;
		}
		else
		{
			cc++;
		}
	}
	printf("vowels count=%d\n",vc);
	printf("consonants count=%d",cc);
}
		
	
