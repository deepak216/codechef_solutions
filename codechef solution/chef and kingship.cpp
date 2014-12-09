#include<iostream>
#include<cstdio>
#define llu long long unsigned int 
using namespace std;
int main()
{
int min(int [],int,int);
int t,N,A[100001],i,temp; 
llu sum=0;
scanf("%d",&t);
while(t--)
{
sum=0;
scanf("%d",&N);
for(i=0;i<N;i++)
{
scanf("%d",&A[i]);sum=sum+A[i];
}
temp=min(A,0,N-1);
sum=sum-temp;
sum=sum*temp;
printf("%llu\n",sum);
}
//system("pause");
return 0;
}
int min(int A[],int arr_l,int arr_up)
{
int take_lt,take_rt;
if(arr_l==arr_up)
return A[arr_l];
else
{
int mid=(arr_l+arr_up)/2;
take_lt=min(A,arr_l,mid);
take_rt=min(A,mid+1,arr_up);
if(take_lt<=take_rt)
return take_lt;
else
return take_rt;
}
}
 
