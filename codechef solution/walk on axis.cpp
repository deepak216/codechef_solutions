#include<iostream>
#include<stdio.h>
#include<algorithm>
#include<limits.h>
#define lld long long int
using namespace std;
int main()
{
    int t,i;
    lld N,ans;
    scanf("%d",&t);
    while(t--)
    {
    scanf("%lld",&N);
    if(N%2==0)
    ans=N+((N/2)*(N+1));
    else
    ans=N+(((N+1)/2)*N);
    printf("%lld\n",ans);
    }
    //system("pause");
    return 0;
}
