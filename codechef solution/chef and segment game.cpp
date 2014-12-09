#include<iostream>
#include<cstdio>
#include<math.h>
#include<algorithm>
#define llu long long int
using namespace std;
int main()
{
    int t;
    llu k,c;
    double x;
    scanf("%d",&t);
    while(t--)
    {
    llu b=0,g,s;
    scanf("%lf %lld",&x,&k);
    s=k;
    while(k)
    {
	k=k/2;
	x=x/2;
	b++;
	}
	
	k=s;
    c=(llu)1<<(b-1);
    g=(k-c);
 
    printf("%lf\n",x+(2*x*g));
    }
   
    return 0;
} 
