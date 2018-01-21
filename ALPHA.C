#include <stdio.h>
#include<conio.h>
void main()
{
	char ch;
	printf(" enter the alphabet:");
	scanf("%d",&ch);
	if((ch>=65&& ch<=90)||(ch>=97 && ch<=122 ))
	{
		printf("%c IS ALPHABET",ch);
	}
	else
	{
		printf("%c is not ALPHABET",ch);
	}
	getch();
}
