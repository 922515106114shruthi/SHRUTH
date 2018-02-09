#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,m;
printf(" enter the number of n:");
scanf("%d",&n);
printf(" enter the number of m:");
scanf("%d",&m);
a=n+m;
if(a%2==0)
{
printf("%d is even",a);
}
else
{
printf("%d is odd",a);
}
getch();
}
