#include<stdio.h>
#include<string.h>
int main()
{
int t,n,i,count;
char s[101];
scanf("%d",&t);
while(t--)
{
count=0;
scanf(" %s",s);
n=strlen(s);
for(i=0;i<n;i++)
{
if(s[i]=='A'||s[i]=='D'||s[i]=='O'||s[i]=='P'||s[i]=='Q'||s[i]=='R')
count++;
else if(s[i]=='B')
count=count+2;
}
printf("%d\n",count);
}
return 0;
} 

