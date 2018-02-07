#includE<stdio.h>
#include<conio.h>
void main()
{
int i,n;
printf("enter the value:");
scanf("%d",&n);
for(i=1;i<=10;i++)
{
if(i==n)
{
	printf("yes,%d is number between{1,10]",n);
}
}
getch();
}
