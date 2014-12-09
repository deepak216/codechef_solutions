#include <cstdio>
#include <iostream>
#include <algorithm>
using namespace std;
#define gc getchar_unlocked
int A[1000],L[1000];
int B[1000][1000],C[1000][1000],Q[1000][1000];
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
 
 
int main()
{
int t,i,j,N,M,K;
 
t=read();
while(t--)
{
int ps=0;
 
N=read();M=read();K=read();
for(i=0;i<N;i++)
{
A[i]=read();
}
for(i=0;i<N;i++)
{
for(j=0;j<M;j++)
{
B[i][j]=read();
}
}
for(i=0;i<N;i++)
{
for(j=0;j<M;j++)
{
C[i][j]=read();
Q[i][j]=B[i][j]-C[i][j];
}
}
for(i=0;i<N;i++)
{
L[i]=Q[i][0];
 
for(j=1;j<M;j++)
{
if(Q[i][j]>L[i])
{
L[i]=Q[i][j];
}
}
 
}
for(i=0;i<N;i++)
{
ps+=B[i][A[i]-1];
 
if(Q[i][A[i]-1]>=L[i])
{
L[i]=-1;
}
else
{
L[i]=L[i]-Q[i][A[i]-1];
}
}
 
sort(L,L+N);
 
for(i=N-K;i<N;i++)
{
if(L[i]!=-1)
 
ps+=L[i];
}
printf("%d\n",ps);
}
 
 
return 0;
}
