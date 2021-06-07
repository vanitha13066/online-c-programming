//To read the data from the file...
#include<stdio.h>
int main()
{
	FILE* fp;
	char ch;
	fp = fopen("data.txt","r");
	ch=fgetc(fp);
	while(ch!=EOF)
	{
	printf("%c",ch);
	ch=fgetc(fp);
    }
    fclose(fp);
	return 0;
}
