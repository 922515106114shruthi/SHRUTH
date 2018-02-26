#include<stdio.h>
#include<conio.h>
void main()
{
int i;
	char ch[20];
	printf("  enter the word:");
	scanf("%s",ch);
	printf("%s,",ch);
	for(i=0;i<=5;i++)
	{
		if(i%2==0)
		{
			printf("%c",ch[i]);
		}
   }
		for(i=0;i<=5;i++)
		{
		    if((i%2)!=0)
			  {
			  printf("%c",ch[i]);
		    }
	
	  }
    getch();
    }
