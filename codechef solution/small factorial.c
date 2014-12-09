#include<stdio.h>
long int a[200];
void main()
{
int m,j,temp,x,i,n,k,p,t;
 scanf("%d",&t);
 while(t--)
 {
  k=0;m=0;         
 scanf("%d",&n);
 p=n;
   while(p>0)
   {
    a[k]=p%10;
    p=p/10;m++;k++;
    }
 for(i=n;i>=2;i--)
  {
   j=0;  temp=0;
    while(j<m)
    {
     x=a[j]*(i-1)+temp;
     a[j]=x%10;
     temp=x/10;
      j++;
    }
    while(temp>0)
    {
     a[j]=temp%10;
     temp=temp/10;
     j++;
     m++;
    }
  }
  for(i=m-1;i>=0;i--)
 {
 printf("%ld",a[i]);
 }
 printf("\n");
}
 }
