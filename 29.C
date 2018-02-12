#include<stdio.h>
#include<conio.h>
void main()
{
int time,hour,minute;
printf("enter the time:");
scanf("%d",&time);
minute=time%60;
hour=time/60;
printf("%d %d",hour,minute);
getch();
}
