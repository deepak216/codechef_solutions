#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int t,ar[100001],i,n,temp,temp1;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
scanf("%d",&ar[0]);
temp=ar[0];
for(i=1;i<n;i++)
{
scanf("%d",&ar[i]);
if((i-1)%2==0&&ar[i]<=ar[i-1])
{
temp1=ar[i];
ar[i]=temp;
ar[i-1]=temp1;
}
else if((i-1)%2!=0&&ar[i]>=ar[i-1])
{
temp1=ar[i];
ar[i]=temp;
ar[i-1]=temp1;
 
}
temp=ar[i];
 
}
for(i=0;i<n;i++)
printf("%d ",ar[i]);
printf("\n");
}
return 0;
}
 
