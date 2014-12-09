#include<iostream>
#include<cstdio>
#include<algorithm>
#include<set>
using namespace std;
int main()
{
    int i,t,ar[1001],m,n,p,flag,C[501],A[501];
    scanf("%d",&t);
    while(t--)
    {
    flag=0;
    int j=0,k=0;
    for(i=0;i<1001;i++)
    ar[i]=0;
    scanf("%d %d",&n,&m);
    for(i=0;i<m;i++)
    {
    scanf("%d",&p);
    ar[p]=1;
    }
    
    for(i=1;i<=n;i++)
    {
    if(ar[i]==0)
    {
    if(flag==0)
    {flag=1;C[k++]=i;}
    else
    {flag=0;A[j++]=i;}
    }
    }
    for(i=0;i<k;i++)
    printf("%d ",C[i]);
    printf("\n");
    for(i=0;i<j;i++)
    printf("%d ",A[i]);
    printf("\n");
    }
   
    return 0;
}
