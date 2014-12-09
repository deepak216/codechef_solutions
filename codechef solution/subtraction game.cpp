#include<cstdio>
#include<iostream>
using namespace std;
int gcd(int a,int b)
{
int c;
if(a>=b)
{
c=a%b;
while(c!=0)
{
a=b;
b=c;
 
c=a%b;
}
return b;
}
else
{
c=b%a;
while(c!=0)
{
b=a;
a=c;
 
c=b%a;
 
}
return a;
}
 
}
int main()
{
int t,temp,n,ar[1001];
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
if(n==1)
temp=1;
else
{
for(int i=0;i<n;i++)
{
scanf("%d",&ar[i]);
if(i==1)
{
temp=gcd(ar[0],ar[1]);
}
else if(i>1)
temp=gcd(temp,ar[i]);
}
}
printf("%d\n",temp);
}
return 0;
}
 
