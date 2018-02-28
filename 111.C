#include<stdio.h>
#include<conio.h>
void main()
{
           int n,c=0,r;
            scanf("%d",&n);
            while(n!=0)
            {
            	r=n%10;
            	n=n/10;
            	c++;
            	
            }
            printf("%d is number of count",c);
            getch();
 }           
