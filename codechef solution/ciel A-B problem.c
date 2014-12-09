#include<stdio.h>
int main()
{
int a,b,ans;
scanf("%d %d",&a,&b);
if((a-b)%10==9)
ans=a-b-1;
else
ans=a-b+1;
printf("%d\n",ans);
return 0;
}
