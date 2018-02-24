#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,f;
printf(" enter the value");
scanf("%d",&n);
for(i=1;i<n;i++)
{
if(n%i==0)
{
f=f*i;
}
if(f==1)
{
printf(" %d is composite number",f);
}
else
{
printf(" %d is not composite number",f);
}
}
getch();
}
