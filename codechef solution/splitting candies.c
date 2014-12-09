#include<stdio.h>
#define lld long long int
int main()
{
int t;
lld k,n,p,q;
scanf("%d",&t);
while(t--)
{
scanf("%lld%lld",&n,&k);
if(k==0)
{
printf("0 %lld\n",n);
}
else
{
p=n/k;
q=n%k;
printf("%lld %lld\n",p,q);
}
}
return 0;
}
 
