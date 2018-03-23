#include<stdio.h>
#include<conio.h>
void main()
{
int h1,m1,h2,m2;
long r,time1,time2;
scanf("%d %d",&h1,&m1);
scanf("%d %d",&h2,&m2);
time1=(h1*60)+m1;
time2=(h2*60)+m2;
if(time1>time2)
{
r=time1-time2;
printf("%ld",r);
}
else
{
r=time2-time1;
printf("%ld",r);
}
getch();
}
