#include<iostream>
#include<cstdio>
#include<math.h>
#define lld long long int
#define gc getchar_unlocked
using namespace std;
int prime[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47,53,59,61,67,71,73,79,83,89,97,101,103,107,109,113,127,131,137,139,149,151,157,163,167,173,179,181,191,193,197,199,211,223,227,229,233,239,241,251,257,263,269,271,277,281,283,293,307,311,313,317,331,337,347,349,353,359,367,373,379,383,389,397,401,409,419,421,431,433,439,443,449,457,461,463,467,479,487,491,499};
 
int ar[501]={0};
int A[501][501];
void sieve()
{
int n=500,k,i,j;
k=(int)sqrt(n);
ar[1]=1;ar[0]=1;
for(i=2;i<k;i++)
{
if(ar[i]!=1)
{
for(j=i*i;j<=n;j=j+i)
{
if(j%i==0)
ar[j]=1;
}
}
}
 
}
 
 
void take_prime()
{
int i,s,j,k,count=0;
A[2][2]=2;
for(i=3;i<=500;i++)
{
if(ar[i]==0)
{
	A[i][i]=i;
	for(j=2;j<i;j++)
	A[i][j]=A[i-1][j];
}
else
{
k=i/2;s=i;count=0;
   for(j=2;j<=k;j++)
   {
	   count=0;
        if(ar[j]==0)
       {
	     while(s%j==0)
	     {
			count++;s=s/j;
		 }
		 A[i][j]=A[i-1][j]+count*i;
        }
    }
    for(j=k+1;j<i;j++)
    A[i][j]=A[i-1][j];
}
}
}
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
 
lld mod(int b,int n,int m)
{
if(b==0) return 1;
if(n==0) return 1;
 
lld t=mod(b,n/2,m);
 
if(n&1)
return ((t*t)%m*b)%m; 
 
else
return (t*t)%m;
 
}
int main()
{
int t,q,n,m,r,i;
sieve();
take_prime();
t=read();
while(t--)
{
n=read();m=read();q=read();
while(q--)
{
r=read();
if(n<=5)
{
lld k=1,s=1;
for(i=n-r+1;i<=n;i++)
k=k*(lld)pow(i,i);
 
for(i=2;i<=r;i++)
s=s*(lld)pow(i,i);
k=k/s;
k=k%m;
printf("%lld\n",k);
}
else
{
int y[500]={0},size;
lld ans=1;
size=sizeof(prime)/sizeof(int);
for(i=0;i<size;i++)
{
if(prime[i]>n)	
break;
else
{
y[prime[i]]=A[n][prime[i]]-A[r][prime[i]]-A[n-r][prime[i]];
ans=(ans*mod(prime[i],y[prime[i]],m)%m)%m;
}
}
printf("%lld\n",ans);
 
}
}
}
return 0;
}
 
