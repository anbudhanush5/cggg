#include<stdio.h>
#include<conio.h>
void main()
{
int x,y,*a,*b,sum;
clrscr();
printf("Enter two numbers to be added:");
scanf("%d%d",&x,&y);
a=&x;
b=&y;
sum=*a+*b;
printf("Addition is:%d",sum);
getch();
}
