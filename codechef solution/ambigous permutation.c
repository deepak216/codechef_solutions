#include<stdio.h>
int main()
{
int t,ar[100002],count,n,i;
 
while(1)
{
count=0;
scanf("%d",&n);
if(n==0)
break;
for(i=1;i<=n;i++)
{
scanf("%d",&ar[i]);
}
for(i=1;i<=n;i++)
{
if(i!=ar[ar[i]])
{count=1;}
}
if(count!=1)
printf("ambiguous\n");
else
printf("not ambiguous\n");
}
 
return 0;
}
