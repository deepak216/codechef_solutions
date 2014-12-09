#include<iostream>
#include<cstdio>
#include<map>
#include<algorithm>
using namespace std;
map<pair<int,int>,int>value,prio;
pair<int,int> x;
int main()
{
int val,id,attr,pri,n,m,i;
 
 
scanf("%d %d",&n,&m);
while(n--)
{
    scanf("%d %d %d %d",&id,&attr,&val,&pri);
    x=make_pair(id,attr);
    if(prio.find(x)!=prio.end())
    {
    if(pri>=prio[x])
    {
    value[x]=val;
    prio[x]=pri;
    }
       }
    else
    {
    value[x]=val;
    prio[x]=pri;
    }
  }      
    for(i=0;i<m;i++)
    {
    scanf("%d %d",&id,&attr);
    x=make_pair(id,attr);
    printf("%d\n",value[x]);
                    }
 
 
return 0;
}
