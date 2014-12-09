#include<stdio.h>
#include<string.h>
int gcd(int a,int b)
{
if(b==0)
return a;
else if(b>a)
return gcd(b,a);
else
return gcd(b,a%b);
}
int main()
{
int t,a,x,r=0,i;
char s[251];    
scanf("%d",&t);
while(t--)
{
r=0;
scanf("%d%s",&a,s);
x=strlen(s);
if(a!=0)
{
for(i=0;i<x;i++)
{
r=(r*10+s[i]-48)%a;
}
printf("%d\n",gcd(a,r));
}
else
{
    printf("%s\n",s);
}
}
 
return 0;
}
 
