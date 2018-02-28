#include<stdio.h>
#include<conio.h>
void main()
{
           int n,k,a[20],i;
            scanf("%d",&n);
            scanf("%d",&k);
            for(i=1;i<=n;i++)
            {
            	scanf("%d",&a[i]);
            }
             for(i=1;i<=n;i++)
            {
            	printf("%d",a[i]);
            }
            for(i=1;i<=n;i++)
            {
            	if(k==a[i])
            	{
            		printf("\nyes");
            	}
            }
            getch();
  }          
            
