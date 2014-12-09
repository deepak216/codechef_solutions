#include <iostream>
#include <cstdio>
#include <algorithm>
#include <math.h>
#define lld long long int
using namespace std;
int arr[1001];
lld tree[3000];
lld f[1001];
lld tree_f[3001];
struct range
{
int l,h;
}R[1001];
 
void build_tree(int node, int a, int b) {
    if(a > b) {return ;}
  	
  	if(a == b) { 
    		tree[node] = (lld)arr[a]; 
		return ;
	}
	
	build_tree(node*2+1, a, (a+b)/2);
        build_tree(node*2+2, 1+(a+b)/2, b); 
	tree[node]=(lld)((lld)tree[node*2+1]+(lld)tree[node*2+2]);
	
}
 
lld query_tree(int node, int a, int b, int i, int j) {
	
	if(a > b || a > j || b < i) return 0; 
 
	if(a >= i && b <= j) 
		return tree[node];
 
	lld q1 = query_tree(node*2+1, a, (a+b)/2, i, j); 
	lld q2 = query_tree(2+node*2, 1+(a+b)/2, b, i, j); 
 
	
	
	return ((lld)((lld)q1+(lld)q2));  
}
 
void build_tree_f(int node,int a,int b)
{
 if(a > b) return ;
  	
  	if(a == b) { 
    		tree_f[node] = f[a]; 
		return ;
	}
	
	build_tree_f(node*2+1, a, (a+b)/2);
        build_tree_f(node*2+2, 1+(a+b)/2, b); 
	tree_f[node]=(lld)((lld)tree_f[node*2+1]+(lld)tree_f[node*2+2]);
 }
 
 void update_tree_f(int node,int a,int b,int i,int j,int value)
 {
 
if(a > b || a > j || b < i) 
		return;
    
  	if(a == b) { 
    		tree_f[node] +=(lld) (value);
    		return;
	}
 
	update_tree_f(node*2+1, a, (a+b)/2, i, j, value); 
	update_tree_f(2+node*2, 1+(a+b)/2, b, i, j, value); 
	tree_f[node]=(lld)((lld)tree_f[node*2+1]+(lld)tree_f[node*2+2]);
 
 
 }
 
 lld query_tree_f(int node,int a,int b,int i,int j)
 {
	 
if(a > b || a > j || b < i) return 0; 
 
	if(a >= i && b <= j) 
		return tree_f[node];
 
	lld q1 = query_tree_f(node*2+1, a, (a+b)/2, i, j); 
	lld q2 = query_tree_f(2+node*2, 1+(a+b)/2, b, i, j); 
 
	
	
	return ((lld)((lld)q1+(lld)q2));   
	 
 }
 
int main()
{
    int n,m,i=0,a,b,q,s,t,u,k=0;
    scanf("%d",&n);
    for(i=0;i<n;i++)
    scanf("%d",&arr[i]);
    m=n;
    build_tree(0,0,n-1);
    i=0;
    while(m--)
    {
    scanf("%d %d",&a,&b);
    a=a-1;b=b-1;
    R[k].l=a;R[k].h=b;k++;
    f[i]=query_tree(0,0,n-1,a,b);
    //printf("%lld\n",f[i]);
    i++;
    }
     
    build_tree_f(0,0,n-1);
    scanf("%d",&q);
    while(q--)
    {
    scanf("%d",&s);
    if(s==1)
    {
     scanf("%d %d",&t,&u);
     t=t-1;
     //update_tree(0,0,n-1,t,t,u);
        for(i=0;i<n;i++)
       {
	if(R[i].l<=t&&R[i].h>=t)
	update_tree_f(0,0,n-1,i,i,u-arr[t]); // brute force in segment tree
	}
	//printf("\n%d\n",arr[t]);
      arr[t]=u;
    }
    else
    {
    scanf("%d %d",&t,&u);
    t=t-1;u=u-1;
    printf("%lld\n",query_tree_f(0,0,n-1,t,u));
     }
    }
   
    return 0;
}
