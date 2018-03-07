#include <stdio.h>
#include<conio.h>
void main()
{
	int n,a[n],i,sum=0;
	scanf("%d",&n);
	for(i=0;i<n;i++)
	{
	    scanf("%d",&a);
	    sum=sum+a;
	}
	printf("%d",sum);
	getch();
}
