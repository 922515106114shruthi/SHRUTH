#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=0,a[20];
printf(" enter the range:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
s=s+a[i];	
}
printf("%d  is sum of digits",s);
getch();
}
