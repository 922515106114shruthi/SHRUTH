#include<stdio.h>
#include<conio.h>
void main()
{
int n,i,j,c=0,k;
printf(" enter the value :");
scanf("%d",&n);
printf(" enter the k value:");
scanf("%d",&k);
for(i=1;i<=n;i++)
{
if(k==i)
{
for(j=0;j<=i;j++)
{
c=c+j;
}
}

printf("%d,",i);
}
printf("%d is sum",c);
getch();
}
