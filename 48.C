#include<stdio.h>
#include<conio.h>
void main()
{
int i,n,s=0;
printf(" enter the range:");
scanf("%d",&n);
for(i=1;i<=n;i++)
{
	printf("%d",i);

}for(i=1;i<=n;i++)
{
	s=s+i;
}
printf("  sum:%d",s/n);
getch();
}
