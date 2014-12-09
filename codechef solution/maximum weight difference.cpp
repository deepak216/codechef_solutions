#include<iostream>
#include<cstdio>
#include<cstdlib>
using namespace std;
int compare(void const *p,void const *q)
{
return(*(int *)p-*(int *)q);
}
int main()
{
int ar[101],k,a,b,c,d,t,n,j,i,e,f;
scanf("%d",&t);
while(t--)
{
a=0;b=0;c=0;d=0;
scanf("%d%d",&n,&k);j=n;
for(i=0;i<n;i++)
scanf("%d",&ar[i]);
qsort(ar,n,sizeof(int),compare);
for(i=0;i<k;i++)
a=a+ar[i];
 
for(i=k;i<n;i++)
b=b+ar[i];
 
 
 
if(a>=b)
e=a-b;
else
e=b-a;
 
for(j=n-1;j>=n-k;j--)
c=c+ar[j];
 
 
 
for(j=n-k-1;j>=0;j--)
d=d+ar[j];
 
 
 
if(c>=d)
f=c-d;
else
f=d-c;
 
if(e>=f)
printf("%d\n",e);
else
printf("%d\n",f);
}
return 0;
}
