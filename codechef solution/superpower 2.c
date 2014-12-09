#include<stdio.h>
#define llu long long unsigned int
int s=1000000007;
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
 
llu convert(int n)
{
int temp[25],i=0,k;
llu ans=0;
while(n>0)
{
temp[i++]=n&1; 
n>>=1;         
}
for(k=i-1;k>=0;k--)
{
 
ans=(ans*10)+temp[k];
}
return ans;
}
 
llu mod(llu n,llu a)
{
    if(n == 0) return 1;
    
    llu t=mod(n>>1,a);
    if(n&1)
        return (((t*t)%s)*a)%s;
    return (t*t)%s;
}
 
 
int main()
{
int t,n;
llu an,db,a=2;
scanf("%d",&t);
while(t--)
{
n=read();         
db=convert(n);
an=mod(db,a);    
an=(an*an)%s;
printf("%llu\n",an);   
} 
    
 
return 0;
}
 
