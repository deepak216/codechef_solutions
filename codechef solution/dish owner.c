#include<stdio.h>
 
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
/*void quick_union(int chef[],int ma,int mi)
{
chef[mi]=ma;
 }*/
 inline int find(int chef [],int i)
 {
 /*if(chef[s]==s)
 return s;
 
 return find(chef,chef[s]);
 while(chef[s]!=s)
 {
 s=chef[s];
 }
 return s;*/
  int j;
    if(chef[i]==i)
                return i;
    else
        {j=find(chef,chef[i]);
        //Path Compression Heuristics
        chef[i]=j;
        return j;}
 }
 
int main()
{
int t,n,S[10001],q,i,f,j,k,chef[10001],t1,t2;
scanf("%d",&t);
 
while(t--)
{
 
//scanf("%d",&n);
n=read();
for(i=1;i<=n;i++)
{S[i]=read();chef[i]=i;}
//scanf("%d",&S[i]);
//for(i=1;i<=10000;i++)
//chef[i]=i;
//scanf("%d",&q);
q=read();
while(q--)
{
//scanf("%d",&f);
f=read();
if(f==0)
{
//scanf("%d%d",&j,&k);
j=read();k=read();
t1=find(chef,j);t2=find(chef,k);
//if(S[t1]>S[t2])
//{ma=t1;mi=t2;}
//else
//{mi=t1;ma=t2;}
 
if(S[t1]==S[t2]&&(t1==t2))
{
printf("Invalid query!\n");
}
else if(S[t1]==S[t2]&&(t1!=t2))
{}
else
{
//quick_union(chef,ma,mi);
if(S[t1]>S[t2])
{
 
 chef[t2]=t1;
}
else
{
  chef[t1]=t2;
}
}
} 
else
{
//scanf("%d",&j);
j=read();
printf("%d\n",find(chef,j));
}
}
}
 
return 0;
}
