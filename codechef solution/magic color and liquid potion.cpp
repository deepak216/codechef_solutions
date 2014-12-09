#include<iostream>
#include<stdio.h>
#include<algorithm>
using namespace std;
#define lld long long int
int max(int a,int b,int c)
{
if(a>=b&&a>=c)
return a;
else if(b>=a&&b>=c)
return b;
else
return c;
}
int main()
{
int t,r[101],g[101],b[101],M,R,G,B,i;
scanf("%d",&t);
while(t--)
{
 
int max1=0,max2=0,max3=0;
scanf("%d %d %d %d",&R,&G,&B,&M);
 
for(i=0;i<R;i++)
{
scanf("%d",&r[i]);
if(r[i]>=max1)
max1=r[i];
}
 
for(i=0;i<G;i++)
{
scanf("%d",&g[i]);
if(g[i]>=max2)
max2=g[i];
}
 
 
for(i=0;i<B;i++)
{
scanf("%d",&b[i]);
if(b[i]>=max3)
max3=b[i];
}
 
while(M--)
{
if(max1>=max2&&max1>=max3)
{
max1=max1>>1;
}
 
else if(max2>=max1&&max2>=max3)
{
 
max2=max2>>1;
}
 
else 
{
max3=max3>>1;
}
}
printf("%d\n",max(max1,max2,max3));
}
 
return 0;
}
