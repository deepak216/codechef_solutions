#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int N,x1,y1,x2,y2,x3,y3,count=0,d1,d2,d3;
scanf("%d",&N);
while(N--)
{
scanf("%d%d%d%d%d%d",&x1,&y1,&x2,&y2,&x3,&y3);
d1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
d2=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
d3=(x3-x1)*(x3-x1)+(y3-y1)*(y3-y1);
if((d1==(d2+d3))||(d2==(d1+d3))||(d3==(d1+d2)))
count++;
}
printf("%d",count);
return 0;
}
 
