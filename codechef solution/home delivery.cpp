#include <iostream>   
#include <sstream>   
#include <cstdio>   
#include <cstdlib>   
#include <cmath>       
#include <string>   
#include <vector>   
#include <list>   
#include <queue>   
#include <deque>   
#include <stack>   
#include <map>   
#include <set>   
#include <algorithm>   
using namespace std;  
#define gc getchar_unlocked
inline int read()
{
	int x;
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
	return x;
}
int get_root(int nodes[],int a)
{
	while(nodes[a]!=a)
	a=nodes[a];
	return nodes[a];
}
void quick_union(int nodes[],int r,int c,int wt[])
{
int x,y;
x=get_root(nodes,r);
y=get_root(nodes,c);
if(wt[x]>=wt[y])
{nodes[y]=nodes[x];wt[x]=wt[x]+wt[y];}
else
{nodes[x]=nodes[y];wt[y]=wt[x]+wt[y];}
 
}
bool isConnected(int nodes[],int a,int b)
{
 if(get_root(nodes,a)==get_root(nodes,b))
 return true;
 else 
 return false;
}
int main()
{
int t,n,m,a,b,x,y,q;
int nodes[101],wt[101];
//scanf("%d",&t);
t=read();
while(t--)
{
	//scanf("%d %d",&n,&m);
	
	n=read();
	for(int i=0;i<n;i++)
	{nodes[i]=i;wt[i]=1;}
	m=read();
	while(m--)
	{
	x=read();
	y=read();	
	quick_union(nodes,x,y,wt);
	}
	q=read();
	while(q--)
	{
	a=read();
	b=read();
	if(isConnected(nodes,a,b)==true)
	printf("YO\n");
	else
	printf("NO\n");
		}
}
return 0;
}
