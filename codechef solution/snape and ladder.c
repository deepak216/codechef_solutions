#include<stdio.h>
#include<math.h>
int max(int a,int b)
{
return (a>=b?a:b);
}
int min(int a,int b)
{
return(a<=b?a:b);
}
int main()
{
int t,b,ls,c,d;
double ans,ans1;
scanf("%d",&t);
while(t--)
{
 
scanf("%d%d",&b,&ls);
c=max(b,ls);
d=min(b,ls);
ans=sqrt(c*c-d*d);
ans1=sqrt(ls*ls+b*b);
printf("%.5lf %.5lf\n",ans,ans1);
}
return 0;
}
 

