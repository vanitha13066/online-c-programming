//To add the data into the file..
#include<stdio.h>
int main()
{
	FILE* fp;
	fp = fopen("data.txt","a");
	char s1[100];
	printf("ENter any data:");
	gets(s1);
	fprintf(fp,"\n%s",s1);
	printf("New data added successfully!!!!");
	fclose(fp);
	return 0;
}
