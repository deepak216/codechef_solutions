#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
int t,A,B,min,max;
scanf("%d",&t);
while(t--)
{
scanf("%d%d",&A,&B);          
if(A>=B)
min=A;
else
min=B;
max=A+B;
printf("%d %d\n",min,max);
          } 
//system("pause");    
return 0;
}
 
