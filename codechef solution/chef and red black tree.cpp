#include<iostream>
#include<cstdio>
#include<math.h>
#include<algorithm>
using namespace std;
int main()
{
    char ar[3];
    int q,x,y,f=0,c;
    scanf("%d",&q);
    while(q--)
    {
    int i,j;
    c=0;
       // f=0 for black and f=1 for red
    scanf(" %s%d%d",ar,&x,&y);
    if(ar[0]=='Q'&&ar[1]=='i')
    {
    f++;
      }
             
    else if((ar[0]=='Q'&&ar[1]=='b'&&f%2==0)||(ar[0]=='Q'&&ar[1]=='r'&&f%2!=0))  // starting of Qb
    {
     i=(int)log2(x);
     j=(int)log2(y);
     if(i==j)
     {
     while(x!=y)
     {
     if(i%2==0)
     c=c+2;
     if(x%2==0)
      x=x/2;
     else
      x=(x-1)/2;
     if(y%2==0)
      y=y/2;
     else
      y=(y-1)/2;
     i--;j--;
     }
     if(i%2==0)
     c++;
     }
     
     else if(i>j)
     {
     
     while(j!=i)
     {
     if(i%2==0)
     c++;
     i--;
     if(x%2==0)
     x=x/2;
     else 
     x=(x-1)/2;
     }
        
     while(x!=y)
     {
     if(i%2==0)
     c=c+2;
     if(x%2==0)
      x=x/2;
     else
      x=(x-1)/2;
     if(y%2==0)
      y=y/2;
     else
      y=(y-1)/2;
     i--;j--;
     }
     if(i%2==0)
     c++;
      }
      
      else 
      {
     while(j!=i)
     {
     if(j%2==0)
     c++;
     j--;
     if(y%2==0)
     y=y/2;
     else 
     y=(y-1)/2;
     
     }
     
     while(x!=y)
     {
     
     if(i%2==0)
     c=c+2;
     if(x%2==0)
      x=x/2;
     else 
      x=(x-1)/2;
     if(y%2==0)
      y=y/2;
     else 
      y=(y-1)/2;
     i--;j--;
     }
      if(i%2==0)
       c++;
       } 
       printf("%d\n",c);
                  // end of Qb
     }
     
     else if(ar[0]=='Q'&&ar[1]=='r'&&f%2==0||(ar[0]=='Q'&&ar[1]=='b'&&f%2!=0))   // starting of Qr 
     {
     i=(int)log2(x);
     j=(int)log2(y);
     if(i==j)
     {
     while(x!=y)
     {
     if(i%2!=0)
     c=c+2;
     if(x%2==0)
      x=x/2;
     else
      x=(x-1)/2;
     if(y%2==0)
      y=y/2;
     else
      y=(y-1)/2;
     i--;j--;
     }
     if(i%2!=0)
      c++;
     }
     else if(i>j)
     {
      while(i!=j)
      {
      if(i%2!=0)
      c++;
      if(x%2==0)
      x=x/2;
      else
      x=(x-1)/2;
      i--;
      }
      
      while(x!=y)
      {
      if(i%2!=0)
      c=c+2;
      if(x%2==0)
       x=x/2;
      else
       x=(x-1)/2;
      if(y%2==0)
       y=y/2;
      else
       y=(y-1)/2;
      i--;j--;
      }
      if(i%2!=0)
       c++;
      }
         
      else 
      {
       
       while(i!=j)
       {
       if(j%2!=0)
        c++;
       if(y%2==0)
        y=y/2;
       else
        y=(y-1)/2; 
       j--;      
       }
       while(x!=y)
       {
       if(i%2!=0)
       c=c+2;
       if(x%2==0)
        x=x/2;
       else
        x=(x-1)/2;
       if(y%2==0)
        y=y/2;
       else
        y=(y-1)/2;
       i--;j--;
       } 
       if(i%2!=0)
       c++;
       }
         printf("%d\n",c);
     }
                // end of Qr
    }
   
    return 0;
}

