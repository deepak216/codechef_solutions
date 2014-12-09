#include<iostream>
#include<cstdio>
#include<string.h>
using namespace std;
int main()
{
char s[1000000],cp[95][3];
int t,i,n,f=0,p,q,len,index,flag[1000000]={0},g;
scanf("%d",&t);
while(t--)
{
for(i=0;i<1000000;i++)
flag[i]=0;
f=0;
scanf("%d",&n);
for( i=0;i<n;i++)
{
scanf("%s%s",&cp[i][0],&cp[i][1]);
//printf("again\n");
}
scanf("%s",s);
len=strlen(s);
for(int j=0;j<n;j++)
{
for(i=0;i<len;i++)
{
if(s[i]==cp[j][0]&&flag[i]!=1)
{s[i]=cp[j][1];flag[i]=1;}
}
}
for(i=0;i<len;i++)
{
if(s[i]=='.')
{index=i;f=1;break;}
}
if(f==1)
{
for(i=len-1;i>=index;i--)
{
if(s[i]=='.')
{q=i;g=0;break;}
else if(s[i]!='0'&&s[i]!='.')
{q=i;g=1;break;}
}
for(i=0;i<=index;i++)
{
if(s[i]!='0')
{p=i;break;}
}
if(g==0)
{
if(p==q&&s[p]=='.')
printf("0");
for(i=p;i<q;i++)
printf("%c",s[i]);
}
else
{
for(i=p;i<=q;i++)
printf("%c",s[i]);
}
}
else
{
p=q=len-1;
for(i=len-1;i>=0;i--)
{
if(s[i]!='0')
p=i;
}
for(i=p;i<=q;i++)
printf("%c",s[i]);
}
printf("\n");
}
return 0;
}
 
