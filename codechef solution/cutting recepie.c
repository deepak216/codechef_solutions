#include<stdio.h>
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
int t,n,x,a[51],i;
scanf("%d",&t);
while(t--)
{
scanf("%d",&n);
for(i=0;i<n;i++)
{scanf("%d",&a[i]);}
x=a[0];
for(i=1;i<n;i++)
x=gcd(x,a[i]);
for(i=0;i<n;i++)
printf("%d ",a[i]/x);
printf("\n"); 
}  
 
return 0;
}
