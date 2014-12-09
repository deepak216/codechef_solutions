#include<iostream>
#include<stdio.h>
using namespace std;
int dis[251][251];
void warshall(int graph[][251],int n)
{
int i,j;
 
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
dis[i][j]=graph[i][j];
}
 
for(int k=0;k<n;k++)
{
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(dis[i][k]+dis[k][j]<dis[i][j])
dis[i][j]=dis[i][k]+dis[k][j];
}
}
}
 
 
}
int main()
{
int graph[251][251],i,j,n,q,s,g,d;
scanf("%d",&n);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
scanf("%d",&graph[i][j]);
}
warshall(graph,n);
scanf("%d",&q);
while(q--)
{
	scanf("%d %d %d",&s,&g,&d);
	printf("%d %d\n",dis[s][g]+dis[g][d],dis[s][g]+dis[g][d]-dis[s][d]);
}
return 0;
}
 
