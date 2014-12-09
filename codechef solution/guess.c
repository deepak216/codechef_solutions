#include<stdio.h>
#define llu long long int 
#define gc getchar_unlocked
inline int read()
{
	int x;
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
	return x;
}
 
llu gcd(llu a, llu b)
{
  llu c = a % b;
  while(c != 0)
  {
    a = b;
    b = c;
    c = a % b;
  }
  return b;
}
 
int main()
{
int t,n,m;
llu den,num,x;
scanf("%d",&t);
while(t--)
{
n=read();
m=read();
den=(llu)((llu)n*(llu)m);
 
if(n%2==0&&m%2==0)
{
num=(llu)(2*(llu)(n/2)*(llu)(m/2));
}
 
else if(n%2!=0&&m%2==0)
{
num=(llu)((llu)(n/2+1)*(llu)(m/2)+(llu)(n/2)*(llu)(m/2));
}
 
else if(n%2==0&&m%2!=0)
{
num=(llu)((llu)(n/2)*(llu)(m/2)+(llu)(m/2+1)*(llu)(n/2));
}
 
else 
{
num=(llu)((llu)(n/2)*(llu)(m/2+1)+(llu)(n/2+1)*(llu)(m/2));
}
if(num==0)
printf("%lld/%lld\n",num,den);
else 
{
x=gcd(den,num);
num=num/x;
den=den/x;
printf("%lld/%lld\n",num,den);
}
}
return 0;
}
