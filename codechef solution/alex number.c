#include<stdio.h>
int main()
{
int a,t,i;
long long int result,n;
scanf("%d",&t);
while(t--)
{
scanf("%lld",&n);
for(i=0;i<n;i++)
scanf("%d",&a);
result=(n*(n-1))/2;
printf("%lld\n",result);          
}    
return 0;
}
 
