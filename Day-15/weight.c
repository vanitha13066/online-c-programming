// abcd ---a=1 b=2 c=3 d=4
// 10
#include<stdio.h>
int main()
{
	char ch[100];
	gets(ch);
	int i,sum=0;
	for(i=0;ch[i]!='\0';i++)
	{
		if(ch[i]>='a' && ch[i]<='z')
		{
			ch[i]=ch[i]-96;
			sum=sum+ch[i];
		}
	}
	printf("sum=%d",sum);
}
			
	
	
