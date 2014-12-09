#include<stdio.h>
int main()
{
int t,n;
long long int sum,count;
char ch;
scanf("%d",&t);
while(t--)
{
count=0;
scanf("%d",&n);
while(n--)
{
scanf(" %c",&ch);
if(ch=='1')
count++;
}      
sum=count+(long long int)((count*(count-1))/2);
printf("%lld\n",sum);
 
}
 
return 0;
}
 
