#include<stdio.h>
#include<stdlib.h>
int compare(const void *p,const void *q)
{
 return (*(int *)p-*(int *)q);	
}
int main()
{
int t,wt[31],N[31],n,i,j,count,temp[31]={0};
scanf("%d",&t);   
while(t--)
{
count=0; 
scanf("%d",&n);     
for(i=0;i<n;i++)
scanf("%d",&wt[i]);
for(i=0;i<n;i++)
scanf("%d",&N[i]);
qsort(N,n,sizeof(int),compare);
qsort(wt,n,sizeof(int),compare);
for(i=0;i<n;i++)
{
for(j=0;j<n;j++)
{
if(wt[i]<=N[j])
{count++;N[j]=-1;break;}
}
}
printf("%d\n",count);
}	
return 0; 	
}
 
