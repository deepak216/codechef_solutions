#include<iostream>
#include<stdio.h>
using namespace std;
int main()
{
    int n,m,A[100002],l,r,c,p,i;
    scanf("%d",&n);
    for(i=1;i<=n;i++)
    {
    scanf("%d",&A[i]);
    }
    scanf("%d",&m);
    while(m--)
    {
    scanf("%d",&c);
    
    if(c==1)
    {
    scanf("%d %d %d",&l,&r,&p);
     for(i=l;i<=r;i++)
     {
     if(A[i]%p==0)
     A[i]=A[i]/p;
     }
    }
    else
    {
    scanf("%d %d",&l,&r);
    A[l]=r;        
    }
    }
    for(i=1;i<=n;i++)
    printf("%d ",A[i]);
    printf("\n");
    
    return 0;
}
