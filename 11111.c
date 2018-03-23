#include<stdio.h>
#include<conio.h>
void main()
{
    int a,b=0,c;
    scanf("%d",&a);
    if(a==0)
    {
        printf("invalid no");
    }
    else
    {
        while(a!=0)
        {
            c=a%10;
            b=b*10+c;
            a=a/10;
            
        }
        printf("%d",b);
    }
    getch();
}
