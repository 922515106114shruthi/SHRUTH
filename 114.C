#include<stdio.h>
#include<conio.h>
void main()
{
           int n,k,a[20],i,b=0;
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
            	if((a[i]%2!=0))
            	{
            	
            	            
            b++;
            		
            	}
            if(b==k)
            {	if((a[i]%2!=0))
            	{
            	
            	            
            		printf("\n%d",a[i]);
            		
        }}	
            }
            getch();
            }
