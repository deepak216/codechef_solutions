#include<stdio.h>
int main()
{
int t,i,n,cy,ci,cn;
char S[1001];
scanf("%d\n",&t);
while(t--)
{
ci=0;cn=0;cy=0;
scanf("%d\n",&n);
scanf(" %s",S);
for(i=0;S[i]!='\0';i++)
{
if(S[i]=='I')
ci++;
else if(S[i]=='Y')
cy++;
else
cn++;
}
if(ci>0)
printf("INDIAN\n");
else if((ci==0&&cn>0&&cy>0)||(cy>0&&cn==0))
printf("NOT INDIAN\n");
else if(cn>0&&cy==0)
printf("NOT SURE\n");
}
return 0;
}
