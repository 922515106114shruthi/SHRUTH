#include<stdio.h>
#include<conio.h>
void main()
{
	int a,b,i,n;
	printf(" enter the range:");
	scanf("%d,%d",&a,&b);
	scanf("%d",&n);
	for(i=a;i<=b;i++)
	{
		if(i==n)
		{
			printf("%d is between number",i);
		}
	
	}
  getch();
  }
