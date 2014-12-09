#include<stdio.h>
#define llu long long unsigned int
int main()
{
int a,i,n;
llu count=0,sum;
scanf("%d",&n);
for(i=0;i<n;i++)
{
scanf("%d",&a);
count=count+a;
}
sum=(llu)(((llu)n*(llu)(n+1)))/2;
if(count==sum)
printf("YES\n");
else
printf("NO\n");
return 0;
}
 
