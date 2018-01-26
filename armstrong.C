#include<stdio.h>
#include<conio.h>
void main()
{
int num,temp,d,s=0;
printf(" enter the number:");
scanf("%d",&num);
temp=num;
while(temp!=0)
{
d=temp%10;
s=s+d*d*d;
temp=temp/10;
}
if(num=s)
{
printf("%d is armstrong",num);
}
else
{
printf("%d is not armstrong",num);
}
getch();
}
