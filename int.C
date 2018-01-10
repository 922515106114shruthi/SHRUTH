#include<stdio.h>
#include<conio.h>
void main()
{
int a,n,count=1;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&b);
if(b>=0)
{
count++;
}
}
printf("%d",count);
getch();
}
