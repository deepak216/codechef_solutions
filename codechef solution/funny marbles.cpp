#include<iostream>
#include<cstdio>
#include<algorithm>
#define lld long long int
using namespace std;
int arr[1000001];
lld tree[2097151];
 
void build_tree(int node, int a, int b) {
    if(a > b) return ;
  	
  	if(a == b) { 
    		tree[node] = (lld)arr[a]; 
		return ;
	}
	
	build_tree(node*2+1, a, (a+b)/2);
    build_tree(node*2+2, 1+(a+b)/2, b); 
	tree[node]=(lld)((lld)tree[node*2+1]+(lld)tree[node*2+2]);
	
}
 
 
void update_tree(int node, int a, int b, int i, int j, int value) {
    
	if(a > b || a > j || b < i) 
		return;
    
  	if(a == b) { 
    		tree[node] =(lld)((lld)tree[node]+(lld) value);
    		return;
	}
 
	update_tree(node*2+1, a, (a+b)/2, i, j, value); 
	update_tree(2+node*2, 1+(a+b)/2, b, i, j, value); 
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
 
int main()
{
    int n,q,i,a,b;
    char c;
    scanf("%d %d",&n,&q);
    for(i=0;i<n;i++)
    {
	scanf("%d",&arr[i]);
	}
	build_tree(0,0,n-1);
	while(q--)
	{
	scanf(" %c",&c);
	if(c=='S')
	{
	scanf("%d %d",&a,&b);
	printf("%lld\n",query_tree(0,0,n-1,a,b));
	}
	else if(c=='G')
	{
	scanf("%d %d",&a,&b);
	update_tree(0,0,n-1,a,a,b);
	}
	else
	{
	scanf("%d %d",&a,&b);
	update_tree(0,0,n-1,a,a,-b);
	}
	}
    return 0;
}
