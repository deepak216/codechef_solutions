#include<iostream>
#include<stdio.h>
using namespace std;
 
int main()
{
int t,a,b,c;
scanf("%d",&t);
while(t--)
{
scanf("%d%d%d",&a,&b,&c);
if((a==b&&b==c)||(a+b>c&&b+c>a&&c+a>b))
printf("0\n");
else if(c>=(a+b))
printf("%d\n",c-(a+b));
else if(a>=(c+b))
printf("%d\n",a-(c+b));
else if(b>=(a+c))
printf("%d\n",b-(a+c));
}
 
return 0;
}
