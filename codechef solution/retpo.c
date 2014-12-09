#include<stdio.h>
#include<stdlib.h>
#define gc getchar_unlocked
inline int read()
{
	int x;
    register int c = gc();
    x = 0;
    int neg = 0;
    for(;((c<48 || c>57) && c != '-');c = gc());
    if(c=='-') {neg=1;c=gc();}
    for(;c>47 && c<58;c = gc()) {x = (x<<1) + (x<<3) + c - 48;}
    if(neg) x=-x;
	return x;
}
int max(int x,int y)
{
return (x>y?x:y);
}
int main()
{
int t,x,y;
scanf("%d",&t);    
while(t--)
{
x=read();
y=read();
x=abs(x);
y=abs(y);
 
if(x==0&&y%2!=0)
printf("%d\n",2*y-1);
else if(x==0&&y%2==0)
printf("%d\n",2*y);
else if(y==0&&x%2!=0)
printf("%d\n",2*x+1);
else if((y==0&&x%2==0))
printf("%d\n",2*x);
 
else
{
if(x==y)
printf("%d\n",2*x);
else if((x%2==0&&y%2==0)||(x%2!=0&&y%2!=0))
printf("%d\n",2*max(x,y));
else if(((x%2==0&&y%2!=0)&&x<y)||((x%2!=0&&y%2==0)&&x<y))
printf("%d\n",2*y-1);
else if((x%2==0&&y%2!=0)&&x>y||((x%2!=0&&y%2==0)&&x>y))
printf("%d\n",2*x+1);
}
}
 
 
 
return 0;
}
