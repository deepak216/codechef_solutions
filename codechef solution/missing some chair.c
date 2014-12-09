#include<stdio.h>
#define llu long long unsigned int
int s=1000000007;
llu mod(int n)
{
if(n==0)
return 1;
else if(n==1)
return 2;
else if(n%2==0)
{
return (((mod(n/2)%s)*(mod(n/2)%s))%s);
 }
else
{
    return (((mod(n/2+1)%s)*(mod(n/2)%s))%s);
}
}
int main()
{
int n,t;
scanf("%d",&t);
while(t--)
{    
scanf("%d",&n);
printf("%d\n",mod(n)-1);
}
 
return 0;
}
 
