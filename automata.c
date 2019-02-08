#include<stdio.h>
int main()
{
int n ;
printf("enter the number of character ");
scanf("%d",&n);
int str[n],i,y=0,z=0,m;
printf("enter the string");
for(m=0;m<n;m++)
{
scanf("%d",&str[m]);
}
for(i=0;i<n;i++)
{
	if(str[i]==1)
	{
		y=y+1;	
		z=0;
	}
	else
	{
		z=z+1;
		y=0;
	}
	if(y>=2||z>=2)
{
printf("Y");
}
else
printf("N");
}
}

	

