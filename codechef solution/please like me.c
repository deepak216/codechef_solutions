#include<stdio.h>
int main()
{
int t,f=0,i;
double ratio,ans,cr,L,D,S,C;
scanf("%d",&t);
while(t--)
{f=0;
scanf("%lf%lf%lf%lf",&L,&D,&S,&C); 
cr=(C+1.0);
ratio=(L/S);
for(i=1;i<=D;i++)
{
if(i==1)
ans=1.0;
else
ans=(ans*cr);
if(ans>=ratio)
{f=1;break;}
}
if(f==1)
printf("ALIVE AND KICKING\n");
else
printf("DEAD AND ROTTING\n");
}	
return 0;
}
