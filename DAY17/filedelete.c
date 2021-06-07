//To delete a file
#include<stdio.h>
int main()
{
	char fname[100];
	int res;
	printf("Enter name of the file to be delete");
	scanf("%s",fname);
	res = remove(fname);
	//By using remove function we can delete the file....
	if(res==0)
	{
		printf("File deleted successfully");
	}
	else
	{
		printf("File is unable to delete");
	}
	return 0;
}
