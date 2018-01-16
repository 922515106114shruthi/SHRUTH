#include<stdio.h>
#include<conio.h>
void main()
{
int a=0,n,i;
printf("enter the number:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
a=a+i;
}
printf("%d is sum",a);
getch();
}
