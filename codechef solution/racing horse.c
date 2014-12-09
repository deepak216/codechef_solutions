#include<stdio.h>
#include<stdlib.h>
int compare(const void *a,const void *b)
{
return (*(int*)a-*(int*)b);
}
int main()
{
int t,n,N[5001],i,x;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&N[i]);
}
qsort(N,n,sizeof(int),compare);
for(i=0;i<n-1;i++)
{
N[i]=N[i]-N[i+1];
if(N[i]<0)
N[i]=-N[i];
}
qsort(N,n-1,sizeof(int),compare);
x=N[0];
if(x<0)
x=-x;
printf("%d\n",x);
}
return 0;
}
