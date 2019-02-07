#include<stdio.h>
#include<math.h>

struct point
{
double x,y;
double dis;
int value;
};
int main()
{
int n=17,i,j,k=3,freq1,freq2;
struct point arr[n];
struct point p,m,v;
printf("enter the x and y co ordinate of point p");
scanf("%lf",&p.x);
scanf("%lf",&p.y);

arr[0].x=1;
arr[0].y=12;
arr[0].value=0;

arr[1].x=2;
arr[1].y=5;
arr[1].value=0;

arr[2].x=5;
arr[2].y=3;
arr[2].value=1;

arr[3].x=3;
arr[3].y=2;
arr[3].value=1;

arr[4].x=3;
arr[4].y=6;
arr[4].value=0;


arr[5].x=1.5;
arr[5].y=9;
arr[5].value=1;

arr[6].x=7;
arr[6].y=2;
arr[6].value=1;

arr[7].x=6;
arr[7].y=2;
arr[7].value=1;

arr[8].x=3.8;
arr[8].y=3;
arr[8].value=1;

arr[9].x=3;
arr[9].y=10;
arr[9].value=0;

arr[10].x=5.6;
arr[10].y=4;
arr[10].value=1;

arr[11].x=4;
arr[11].y=2;
arr[11].value=1;

arr[12].x=3.5;
arr[12].y=8;
arr[12].value=0;

arr[13].x=2;
arr[13].y=11;
arr[13].value=0;

arr[14].x=2;
arr[14].y=5;
arr[14].value=1;

arr[15].x=2;
arr[15].y=9;
arr[15].value=0;

arr[16].x=1;
arr[16].y=7;
arr[16].value=0;


for(i=0;i<n;i++)
{
arr[i].dis=sqrt(pow((arr[i].x-p.x),2)+pow((arr[i].y-arr[i].y),2));
}

for(i=0;i<n;i++)
{
for(j=0;j<n-i;j++)
{
	if(arr[j].dis>arr[j+1].dis)
	{
		m.dis=arr[j].dis;
		v.value=arr[j].value;
		arr[j].dis=arr[j+1].dis;
		arr[j].value=arr[j+1].value;
		arr[j+1].dis=m.dis;
		arr[j+1].value=v.value;
	}
}
}
freq1=0;
freq2=0;		
for(i=0;i<k;i++)
{
	if(arr[i].value==0)
	{
	freq1++;
	}
else
freq2++;
}

if(freq1>freq2)
printf("Belongs to 0's group");
else
printf("Belongs to 1'nd group");
}

	

