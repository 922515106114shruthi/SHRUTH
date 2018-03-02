#include<stdio.h>
#include<conio.h>
void main()
{
            int i,n,sum=0,a[22];
            scanf("%d",&n);
            for(i=1;i<=n;i++)
            {
            scanf("%d",&a[i]);	
            }
            for(i=1;i<=n;i++){
            sum=a[i]+sum;
            }
            
            	
            
            printf("%d",sum);
}
