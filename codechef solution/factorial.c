#include<stdio.h>
#include<math.h>
int main()
{
int t,n,count,k,p;
scanf("%d",&t);
while(t--)
{
count=0;p=1;          
scanf("%d",&n);
while(1)
{
k=n/pow(5,p);
p++;
count=count+k;
if(k==0)
break;        
}
printf("%d\n",count);          
}    
return 0;    
}
 
