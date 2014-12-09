#include<stdio.h>
int main()
{
int t,n[101],ar[10001]={0},i,max,x,j,N,y;
scanf("%d",&t);
while(t--)
{
max=0;
scanf("%d",&N);
for(i=0;i<N;i++)
scanf("%d",&n[i]);
for(j=0;j<N;j++)
{
ar[n[j]]++;
if(max>ar[n[j]])
{}
else if(max<ar[n[j]])
{
max=ar[n[j]];x=n[j];
}
else
{
y=n[j];
if(x>y)
x=y;
}
}
for(i=0;i<N;i++)
ar[n[i]]=0;
printf("%d %d\n",x,max);
}
return 0;
}
