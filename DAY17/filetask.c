#include<stdio.h>
int main()
{
	FILE* fp;
	int eid;
	char ename[100];
	char edes[100],i;
	fp=fopen("employee.txt","a");
	for(i=1;i<=2;i++)
	{
		printf("Enter %d employee record\n",i);
		printf("Enter eid:");
		scanf("%d",&eid);
		fprintf(fp,"Employee id: %d\n",eid);
		printf("Enter ename:");
		scanf("%s",ename);
		fprintf(fp,"Employee Name: %s\n",ename);
		printf("Enter edesg:");
		scanf("%s",edes);
		fprintf(fp,"Employee designation : %s\n",edes);
	}
	fclose(fp);
	return 0;
}
