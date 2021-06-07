//To write the any data into a file.
#include<stdio.h>
int main()
{
	FILE* fp;
	char msg[100];
	fp =fopen("data.txt","w");
	printf("Enter any data: ");
	gets(msg);
	fprintf(fp,"%s",msg);
	printf("Data write successfully!!!!");
	fclose(fp);
	return 0;
}
