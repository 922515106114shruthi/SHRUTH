#include<stdio.h>
#include<conio.h>
void main()
{
int a,b,i,g;
	printf(" enter the value:");
	scanf("%d,%d",&a,&b);
	for(i=1;(i<=a&&i<=b);++i)
	{
		if((a%i==0)&&(b%i==0))
		{
			g=i;
		}
	}
	printf("%d",g);
  getch();
  }
