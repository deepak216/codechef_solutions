#include<iostream>
#include<stdio.h>
#include<stdlib.h>
using namespace std;
struct painting
{
int r,c,s;
};
 
int main()
{
struct painting A[10001];
int ar[101][101]={0},n,m,k,i,j,count=0,b=0,flag;
scanf("%d %d %d",&n,&m,&k);
while(k--)
{
scanf("%d %d",&i,&j);
ar[i][j]=1;
}
for(i=1;i<=n;i++)
{
flag=0;
for(j=1;j<=m;j++)
{
if(ar[i][j]==0&&flag==0)
{
A[b].r=i;A[b].c=j;A[b].s=0;
b++;flag=-1;count++;
}
if(ar[i][j]==1)
flag=0;
}
}
printf("%d\n",count);
for(i=0;i<b;i++)
printf("%d %d %d\n",A[i].r,A[i].c,A[i].s);
return 0;
}
