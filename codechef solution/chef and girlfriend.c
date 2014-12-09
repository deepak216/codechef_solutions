#include<stdio.h>
int main()
{
int t;
float dis,dif,time1,time2;
char t1[6],t2[6],aa[10];
scanf("%d",&t);
//gets(aa);
//fflush(stdin);
while(t--)
{
          scanf(" %s",t1);
          scanf(" %s",t2);
//gets(t1);
//gets(t2);
scanf("%f",&dis);
time1=(((t1[0]-48)*10)+(t1[1]-48))*60+(t1[3]-48)*10+(t1[4]-48);
time2=(((t2[0]-48)*10)+(t2[1]-48))*60+(t2[3]-48)*10+(t2[4]-48);
 
dif=time1-time2;
if(dif>=(2*dis))
{printf("%.1f %.1f\n",dif+dis,dif);}
else
{printf("%.1f %.1f\n",dif+dis,(dis+dif/2));}
//fflush(stdin);
}
//system("pause");
return 0;
}
 

