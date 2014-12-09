#include<stdio.h>
int main()
{
//typedef long long int llu;
float a,Y1,Y2,Y3,max,min;
unsigned int N;
int count,count1,x1,x2,x3,y1,y2,y3,p[100],i=0,j;
scanf("%d",&N);
while(N--)
{
 scanf("%d %d %d %d %d %d",&x1,&y1,&x2,&y2,&x3,&y3);
 Y1=y2-y3;
 Y2=y3-y1;
 Y3=y1-y2;
 a=(x1*Y1+x2*Y2+x3*Y3)/2;
 if(a<0)
 a=a*(-1);
 else
 a=a;
 p[i]=a;
 i++;
          }
          max=p[0];min=p[0];
          for(j=0;j<i;j++)
         { 
          if(max<=p[j])
          {count=j+1;
          max=p[j];}
          if(min>=p[j])
          {count1=j+1;
          min=p[j];}
          }
          //printf("%lld",a);
          printf("%d %d\n",count1,count); 
          //system("pause");    
   return 0;  
     
 }
