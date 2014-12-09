#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int t,R,x1,y1,x2,y2,x3,y3,d1,d2,d3;
scanf("%d",&t);
while(t--)
{
scanf("%d",&R);
R=R*R;
scanf("%d%d",&x1,&y1);
scanf("%d%d",&x2,&y2);
scanf("%d%d",&x3,&y3);
d1=(x1-x2)*(x1-x2)+(y1-y2)*(y1-y2);
d2=(x1-x3)*(x1-x3)+(y1-y3)*(y1-y3);
d3=(x2-x3)*(x2-x3)+(y2-y3)*(y2-y3);
//printf("%d%d%d\n",d1,d2,d3);
if(d1<=R&&d2<=R)
printf("yes\n");
else 
{
if(d1>R&&d2<=R)
{
if(d3<=R)
printf("yes\n");
else
printf("no\n");
}
else if(d2>R&&d1<=R)
{
if(d3<=R)
printf("yes\n");
else
printf("no\n");
}
else if(d1>R&&d2>R)
printf("no\n");
 }
}
 
return 0;   
}
 
