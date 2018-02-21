#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,c,t;
printf("\n enter the value of a:");
scanf("%d",&a);
printf("\n enter the value of b:");
scanf("%d",&b);
printf("\n enter the value of c:");
scanf("%d",&c);
t=(a*b)%c;
printf("%d is  result",t);
getch();
}
