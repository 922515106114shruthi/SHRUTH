#include<stdio.h>
#include<conio.h>
void main()
{
int a,b=0,i;
printf(" enter the number :");
scanf("%d",&a);
for(i=2;i<a;i++)
{
if((a*i)==0)
{
b++;
}
if(b==0)
{
printf("%d is prime",a);
}
else
{
printf("%d is not prime",a);
}}
getch();
}
