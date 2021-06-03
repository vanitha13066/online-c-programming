//vanithavani661@ gmail. com$*
//alphabets count=19
//digits count=3
//spaces count=2
//special characters count=4
#include<stdio.h>
int main()
{
	char str[100];
	int i,alp=0,digit=0,spaces=0,spch=0;
	printf("Enter any string:");
	gets(str);
	for(i=0;str[i]!='\0';i++)
	{
		if((str[i]>='a' && str[i]<='z') || (str[i]>='A' && str[i]<='Z'))
			alp++;
		else if(str[i]>='0' && str[i]<='9')
			digit++;
		else if(str[i]==' ')
			spaces++;
		else
			spch++;
	}
	printf("alphabets count=%d\n",alp);
	printf("digits count=%d\n",digit);
	printf("spaces count=%d\n",spaces);
	printf("special characters count=%d\n",spch);
}
	
			
		
			
		
		
		
		
		
		
		


