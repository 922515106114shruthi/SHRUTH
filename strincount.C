#include<stdio.h>
#include<conio.h>
void main()
{
int count=0,i;
char a[20];
printf(" enter the character:");
scanf("%s",a);
strlen(a);
for(i=0;i<strlen(a);i++)
{
count++;
}

printf("%d",count);
getch();
}
