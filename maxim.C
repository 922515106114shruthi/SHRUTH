#include <stdio.h>
#include<conio.h>

void main()
{
	int n,i,a[20];
	printf("enter the no:");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		scanf("%d",&a[i]);
		
	}
	for(i=1;i<=n;i++)
	{
		printf("%d",a[i]);
	}
	
	if(a[1]>a[2])
	{
		printf(" %d is maximum",a[1]);
	}else{ 
	if(a[2]>a[3]&&a[2]>a[1])
	{
		printf(" %d is maximum",a[2]);}
		else
		{
		printf(" %d is maxim",a[3]);
		
	}	}
getch();
}
