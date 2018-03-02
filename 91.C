#include<stdio.h>
#include<conio.h>
void main()
{
int l,b,h,surface,volume;
scanf("%d,%d,%d",&l,&b,&h);
printf("enter the values:%d,%d,%d",l,b,h);
surface=2*((l*b)+(b*h)+(l*h));
volume=l*b*h;
printf("\n volume:%d",volume);
printf("\n surface:%d",surface);
getch();
}
