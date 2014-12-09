#include<stdio.h>
int count;
void swap(int l,int r)
{
if(count>=l&&count<=r)
{
int m1,m2,temp;
temp=r-l+1;
if(temp%2==0)
{
m2=l+temp/2;m1=l+temp/2-1;
count=(m1-count)+m2;
}
else
{
count=2*(l+temp/2)-count;
}
}
 
}
int main()
{
int t,n,c,q,l,r;
scanf("%d",&t);
while(t--)
{
 
scanf("%d%d%d",&n,&c,&q);
 
count=c;
while(q--)
{
scanf("%d%d",&l,&r);
swap(l,r);
//printf("%d\n",count);
}
printf("%d\n",count);
}
return 0;
}
 

