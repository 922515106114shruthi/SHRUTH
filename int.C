#include<stdio.h>
#include<conio.h>
void main()
{
int b[20],n,count=0;
printf("enter the value");
scanf("%d",&n);
for(i=0;i<=n;i++)
{
scanf("%d",&b[i]);
count++;
}

printf("%d",count);
getch();
}
