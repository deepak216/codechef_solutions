#include<iostream>
#include<cstdio>
#define gc getchar_unlocked
using namespace std;
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
 
int main()
{
int t,c,n,i,sum;
t=read();
while(t--)
{
sum=0;
n=read();
c=read();
for(i=0;i<n;i++)
{
sum=sum+read();
}
if(sum<=c)
printf("Yes\n");
else
printf("No\n");
}
return 0;
}
