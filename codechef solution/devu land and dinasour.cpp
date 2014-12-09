#include<stdio.h>
#include<math.h>
#define lld long long int
struct pos
{
int val,index;
}s1[100001];
 
struct neg
{
int val,index;
}s2[100001];
int main()
{
int t,n,ar,i,tpP,tpN;
lld sum;
scanf("%d",&t);
while(t--)
{
tpP=0;tpN=0;sum=0;
sum=0;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&ar);
if(ar<0)
{
 
s2[tpN].val=ar;
s2[tpN].index=i;
tpN++;
}
else
{
 
s1[tpP].val=ar;
s1[tpP].index=i;
tpP++;
}
}
int a=0,b=0;
 
while(a<tpP&&b<tpN)
{
if(abs(s2[b].val)==s1[a].val)
{
sum=sum+(lld)(s1[a].val)*(lld)abs(s1[a].index-s2[b].index);
a++;b++;
}	
	
else if(abs(s2[b].val)>s1[a].val)
{
sum=sum+(lld)s1[a].val*(lld)abs(s1[a].index-s2[b].index);	
s2[b].val=s2[b].val+s1[a].val;
a++;
}
 
else
{
sum=sum+(lld)abs(s2[b].val)*(lld)abs(s1[a].index-s2[b].index);
s1[a].val=s1[a].val+s2[b].val;
b++;
}
 
}
printf("%lld\n",sum);
}
return 0;
}
