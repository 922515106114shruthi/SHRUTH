#include<stdio.h>
#include<conio.h>
void main()
{
char ch;
printf(" enter the character:");
scanf("%c",&ch);
	if(((ch>=65)&&(ch<=90))||((ch>=97)&&(ch<=122)))
	{
  printf("%d is ASCII value",ch);
  }
  getch();
  }
