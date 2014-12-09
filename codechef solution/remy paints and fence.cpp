#include <iostream>   
#include <sstream>   
#include <cstdio>   
#include <cstdlib>   
#include <cmath>       
#include <string>   
#include <string.h>
#include <vector>   
#include <list>   
#include <queue>   
#include <deque>   
#include <stack>   
#include <map>   
#include <set>   
#include <algorithm>  
#include<limits.h>
using namespace std;
#define lld long long int
int main()
{
int t,n,m,i,j,ar[100001],d,min;
char ch,prec,C[100001];
lld ans,mod=1000000009;
scanf("%d",&t);
while(t--)
{
min=INT_MAX;ans=1;
memset(ar,0,100001*sizeof(int));
scanf("%d %d",&n,&m);
while(m--)
{
scanf(" %c %d",&ch,&d);
C[d]=ch;
ar[d]=1;
if(d<min)
{min=d;prec=ch;}
}
j=min;
for(i=min+1;i<=n;i++)
{
if(ar[i]==1&&C[i]!=prec)
{
ans=((lld)(ans%mod)*(lld)(i-j)%mod)%mod;
j=i;
prec=C[i];
}
else if(ar[i]==1)
j=i;
}
printf("%lld\n",ans);
}
return 0;
}
