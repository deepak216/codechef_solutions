#include<stdio.h>
#include<limits.h>
int main()
{
    int t,n,m,ar[101],i,max,sum;
    scanf("%d",&t);
    while(t--)
     {
              sum=0;
     max=INT_MIN;
     scanf("%d %d",&n,&m);
     for(i=0;i<n;i++)
     {
     scanf("%d",&ar[i]);
     if(ar[i]>=max)
     max=ar[i];
     }
     for(i=0;i<n;i++)
     {
     sum=sum+max-ar[i];
     }
     m=m-sum;
     if(m%n==0&&m>=0)
     printf("Yes\n");
     else
     printf("No\n");
     
     
     }
   
    return 0;
}
