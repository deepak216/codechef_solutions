#include<iostream>
#include<cstdio>
#define gc getchar_unlocked
using namespace std;
int ar[100000][10]={0};
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
int main()
{
int n,m,temp[10]={0},k,x,var,i;
char ch[100001];
n=read();
m=read();
scanf("%s",ch);
for(i=0;i<n;i++)
{
if(ch[i]=='0')
temp[0]++;
else if(ch[i]=='1')
temp[1]++;
else if(ch[i]=='2')
temp[2]++;
else if(ch[i]=='3')
temp[3]++;
else if(ch[i]=='4')
temp[4]++;
else if(ch[i]=='5')
temp[5]++;
else if(ch[i]=='6')
temp[6]++;
else if(ch[i]=='7')
temp[7]++;
else if(ch[i]=='8')
temp[8]++;
else if(ch[i]=='9')
temp[9]++;
 
 
for(k=0;k<10;k++)
{
ar[i][k]=temp[k];
//printf("%d ",ar[i][k]);
}
 
 
}
 
while(m--)
{
 
x=read();
var=ch[x-1]-48;
//printf("%d\n",var);
if(x==1)
{
printf("0\n");
}
else
{
temp[0]=ar[x-2][0];temp[1]=ar[x-2][1];temp[2]=ar[x-2][2];temp[3]=ar[x-2][3];temp[4]=ar[x-2][4];temp[5]=ar[x-2][5];temp[6]=ar[x-2][6];temp[7]=ar[x-2][7];temp[8]=ar[x-2][8];temp[9]=ar[x-2][9];
 
temp[0]=(var-0)*temp[0];
        if(temp[0]<0)
        temp[0]=-temp[0];
temp[1]=(var-1)*temp[1];
        if(temp[1]<0)
        temp[1]=-temp[1];
temp[2]=(var-2)*temp[2];
        if(temp[2]<0)
        temp[2]=-temp[2];
temp[3]=(var-3)*temp[3];
         if(temp[3]<0)
        temp[3]=-temp[3];
temp[4]=(var-4)*temp[4];
        if(temp[4]<0)
        temp[4]=-temp[4];
temp[5]=(var-5)*temp[5];
        if(temp[5]<0)
        temp[5]=-temp[5];
temp[6]=(var-6)*temp[6];
        if(temp[6]<0)
        temp[6]=-temp[6];
temp[7]=(var-7)*temp[7];
        if(temp[7]<0)
        temp[7]=-temp[7];
temp[8]=(var-8)*temp[8];
        if(temp[8]<0)
        temp[8]=-temp[8];
temp[9]=(var-9)*temp[9];
        if(temp[9]<0)
        temp[9]=-temp[9];
        
printf("%d\n",temp[0]+temp[1]+temp[2]+temp[3]+temp[4]+temp[5]+temp[6]+temp[7]+temp[8]+temp[9]);        
}
 
}
//system("pause");
return 0;
}
