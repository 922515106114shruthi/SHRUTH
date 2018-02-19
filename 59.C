#include<stdio.h>
#include<conio.h>
void main()
{
	
	int a[20],i,j,n=10,t;
//printf(" enter the range:");
//scanf(" %d",&n);
for(i=1;i<=n;i++)
{
scanf("%d",&a[i]);
}
for(i=1;i<=n;i++)
{
printf("\n%d",a[i]);
}
printf(" \nmaximum number:");
for(i=1;i<=n;i++)
{
for(j=i+1;j<=n;j++)
{
	if(a[i]>a[j]){
t=a[i];
a[i]=a[j];
a[j]=t;}}
}}}
printf("\n%d",a[n]);
getch();
}
