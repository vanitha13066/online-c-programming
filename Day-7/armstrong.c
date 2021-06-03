//Arm strong number
// sum of the cubes = given number(3digits )
// 153=1^3+5^3+3^3=1+125+27=153
#include<stdio.h>
int main()
{
	int n,res=0,r,temp;
	scanf("%d",&n);
	temp=n;
	while(n!=0) // 153!=0(T) 15!=0(T) 1!=0(T)  0!=0(F)
	{
		r=n%10;  // 153%10=3  15%3=5   15%3=1      1%3=1
		res=res+r*r*r; //0+3*3*3=27  27+5*5*5= 152 152+1*1*1=153
		n=n/10;   //153/10=15 15/10=1  1/10=0
	}
	if(temp==res)
	{
		printf("Arm Strong Number");
	}
	else
	{
		printf("Not Arm Strong Number");
	}
	return 0;
}
	
		
	

