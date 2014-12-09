#include<stdio.h>
#include<limits.h>
int main()
{
char N[100001];
int ar[27],t,i;
int count=0,max=INT_MIN,j;
scanf("%d",&t);
while(t--)
{
count=0;max=INT_MIN;
for(i=0;i<27;i++)
ar[i]=1;
 
scanf(" %s",N);
for(i=0;N[i]!='\0';i++)
{
if((ar[N[i]-97])==1)
{
count++;
if(count>max)
max=count;
ar[N[i]-97]++;
}
else if(ar[N[i]-97]>1)
{
ar[N[i]-97]=2;
}
 
}
printf("%d\n",max);
}
 
return 0;
}
 
