#include<iostream>
#include<algorithm>
#include<stdio.h>
using namespace std;
 
int main()
{
    int t,N,A[100001];
    scanf("%d",&t);
    while(t--)
    {
    int i;
    long long int sum=0;
    scanf("%d",&N);          
    for(i=0;i<N;i++)    
    scanf("%d",&A[i]);
    sort(A,A+N);
    if(N&1)
    {
    for(i=N-1;i>=0;i=i-2)
    {
    sum=sum+A[i];
    }
    }
    else
    {
    for(i=N-1;i>=1;i=i-2)
    {
    sum=sum+A[i];
    }    
    }
    printf("%lld\n",sum);
    }
   
    return 0;
    
}
 
