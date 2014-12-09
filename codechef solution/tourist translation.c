#include<stdio.h>
#include<string.h>
int main()
{
int t,n,i,j;
char m[27],ch[111];
scanf("%d",&t);
scanf("%s",m);
while(t--)
{
scanf("%s",ch);
n=strlen(ch);
for(i=0;i<n;i++)
{
if(ch[i]=='_')
printf(" ");
 
else if(ch[i]>=97&&ch[i]<=122)
{
printf("%c",m[ch[i]-97]);
}
else if(ch[i]>=65&&ch[i]<=90)
{
printf("%c",m[ch[i]-65]-32);
}
else 
printf("%c",ch[i]);
}
printf("\n");
}
 
return 0;
}
 

