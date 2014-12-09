#include <iostream>   
#include <sstream>   
#include <cstdio>   
#include <cstdlib>   
#include <cmath>       
#include <string>   
#include <string.h>
#include <vector>   
#include <list>   
#include <queue>   
#include <deque>   
#include <stack>   
#include <map>   
#include <set>   
#include <algorithm>   
using namespace std;  
int main()
{
int n,m,d,s,ar[100001],k;
char ch;
scanf("%d %d",&n,&m);
for(int i=0;i<n;i++)
scanf("%d",&ar[i]);
 
s=0;
while(m--)
{
scanf("\n%c%d",&ch,&d);
switch(ch)
{
case 'R':
        k=d-1+s;
        if(k>=n)
        k=k%n;       
        printf("%d\n",ar[k]);
        break;
   
   
case 'C':
         s=(s+d)%n;
         break;
         
 
case 'A':
         if((s-d)>0)
         s=s-d;
         else
         s=n-(d-s)%n; 
          
         break;   
}
}
return 0;
}
