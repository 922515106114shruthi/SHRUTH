#include<stdio.h>
#include<conio.h>
#include<math.h>
void main()
{ 	         int a,b,n,i;
             scanf("%d,%d",&a,&b);
             n=a*b;                 	
           	 if(sqrt(n)*sqrt(n)==n)
             	{
             		printf("%d is perfect square",n);
      	
             	}
             	else 
             	
             	{
             		printf("%d is not perfect square",n);
             	}
                 getch();
             }
