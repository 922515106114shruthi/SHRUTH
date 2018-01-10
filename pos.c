#include<stdio.h>
#include<conio.h>
void main()
{
int n;
printf("\n enter the number:");
scanf("%d",&n);
if(n==0)
{
printf("%d is zero",n);
}
else
{
if(n>=0)
{
printf("%d is positive",n);
}
else
{
printf("%d is negative",n);
}
}
getch();
}
