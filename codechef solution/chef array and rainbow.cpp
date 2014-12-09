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
using namespace std;  
#define ll long long int 
ll  po(ll b,int p,int mod)   // compute r^(mod-2) 
{
ll half;
if(p==0)
return 1;
if(p==1)
return b;
half=po(b,p/2,mod);
if(p%2==0)
return ((half)%mod*(half)%mod)%mod;
else
return ((((half)%mod*(half)%mod)%mod)*b)%mod;
}
 
int main()
{
int n,mod=1000000007,rev_mod=301388891,r=6;
ll ans=1;
scanf("%d",&n);
if(n%2==0)
n=(n-14)/2;
else
n=(n-13)/2;
n=n+6;
while(r--)
{
ans=((ll)(ans%mod)*(ll)(n%mod))%mod;
n--;
}
ans=(ll)((ans%mod)*(rev_mod%mod))%mod;
printf("%lld\n",ans);
return 0;
}
 
