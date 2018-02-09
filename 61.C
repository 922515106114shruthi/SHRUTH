#include<stdio.h>
#include<conio.h>
void main()
{
char s[20];
int i,k;
printf(" enter the number :");
scanf("%d",&k);
printf(" enter the character:");
scanf("%s",s);
for(i=0;i<k;i++)
{
printf("%c",s[i]);
}
getch();
}
