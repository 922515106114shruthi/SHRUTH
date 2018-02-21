#include<stdio.h>
#include<conio.h>
void main()
{
int a[20],n,i,product=1;
printf("\n enter the range:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
product=product*a[i];
}
printf("%d is product",product);
getch();
}
