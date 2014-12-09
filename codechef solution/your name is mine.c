#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int main()
{
int t,i,j,lm,lw;
char M[25001],W[25001];
scanf("%d",&t);
while(t--)
{
int count=0;
scanf("%s %s",M,W);
lm=strlen(M);
lw=strlen(W);
j=lm-1;
for(i=lw-1;i>=0;i--)
{
if(M[j]==W[i])
{count++;j--;}
}
if(count==lm)
printf("YES\n");
else
{
count=0;j=lw-1;
for(i=lm-1;i>=0;i--)
{
if(M[i]==W[j])
{count++;j--;}
}
if(count==lw)
printf("YES\n");
else
printf("NO\n");
}
}
return 0;
}
 
