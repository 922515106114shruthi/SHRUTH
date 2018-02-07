#include<stdio.h>
#include<conio.h>
void main()
{
int n,m,product;
printf(" enter the value:");
scanf(" %d",&n);
printf(" enter the value:");
scanf(" %d",&m);
product=n*m;
printf("%d",product);
if(product%2==0)
{
	printf(" even");
}
else
{
	printf(" not even");
}
getch();
}
