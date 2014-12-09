#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
char tns[41][51],move[41][51];
int n,t,i,m;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%s %[^\n]%*c",tns[i],move[i]);
}
for(i=n-1;i>=0;i--)
{
if(i==n-1)
printf("Begin %s",move[i]);
else
{
m=strcmp(tns[i+1],"Left");
if(m==0)
{
printf("Right %s",move[i]);
}
else
printf("Left %s",move[i]);
}
printf("\n");
}
}
return 0;
}
