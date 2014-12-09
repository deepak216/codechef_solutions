#include<iostream>
#include<cstdio>
#include<algorithm>
#include<string.h>
using namespace std;
int main()
{
    int t;
    char S[1000001];
    scanf("%d",&t);
    while(t--)
    {
    
    int l,i,j,mid,f=0,c1=0,c2=0;
    scanf("%s",S);
    l=strlen(S);
    mid=l/2;
    for(i=0;i<mid;i++)  // check already a palindrome
    {
    if(S[i]!=S[l-i-1])
     {f=1;break;}
    }
    
    if(f==0)
    printf("YES\n");
    
    else
    {
    j=l-1;
    for(i=0;i<=mid;i++)
    {
    if(S[i]!=S[j])
    {
    if(S[i+1]==S[j])
    {c1++;i++;mid=mid+1;}
    else 
    {c1=c1+2;}
    }
    j--;
    if(c1>1)
    break;
    }
    j=l-1;mid=l/2;
    //printf("%d ",c1);
    for(i=0;i<=mid;i++)
    {
	if(S[i]!=S[j])
	{
	if(S[i]==S[j-1])
	{c2=c2+1;j--;mid=mid-1;}
	else
	{c2=c2+2;}
	}
	j--;
	if(c2>1)
	break;
	}
	//printf(" %d ",c2);
    if(c1==1||c2==1)
    printf("YES\n");
    else 
    printf("NO\n");
    }
    }
    return 0;
}
