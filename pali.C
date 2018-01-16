#include<stdio.h>
#include<conio.h>
void main()
{
int a,rev=0,rem;
printf("enter yhe number:");
scanf("%d",&a);
while(a!=0)
{
rem=a%10;
rev=rev*10+rem;
a=a%10;
}
if(rev!=a)
{
printf("%d is palindrome",rev);
}
else
{
printf("%d is not palindrome",rev);
}
getch();
}
