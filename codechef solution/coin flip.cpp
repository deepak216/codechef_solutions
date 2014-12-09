#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int t,g,i,n,q;
scanf("%d",&t);
while(t--)
{
scanf("%d",&g);
while(g--)
{
scanf("%d%d%d",&i,&n,&q);
if(n%2==0)
printf("%d\n",n/2);
else
{
if((i==1&&q==1)||(i==2&&q==2))
printf("%d\n",n/2);
else if((i==1&&q==2)||(i==2&&q==1))
printf("%d\n",(n/2)+1);
}
}
}
return 0;
}
 
