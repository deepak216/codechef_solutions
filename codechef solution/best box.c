#include<iostream>
#include<cstdio>
#include<cmath>
using namespace std;
int main()
{
int t,p,s;
double d1,d2,d3;    
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&p,&s);          
d1=(p-sqrt(p*p-24*s))/12;
//printf("%lf\n",d1);
d2=s/(2*d1)-(p/4-d1);
d3=p/4-d1-d2;
printf("%.2lf\n",d1*d2*d3);
} 
 
return 0;
}
