//If the file is available or not?
#include<stdio.h>
int main()
{
	FILE* fp;
	fp = fopen("data1.txt","r");
	if(fp!=NULL)
	{
		printf("File name is exist");
	}
	else
	{
		printf("File name is not exist");
	}
	fclose(fp);
	return 0;
}
