#include<stdio.h>
#include<string.h>
int main()
{
int n,l;
char str[100001];
scanf("%d\n",&n);
while(n--)
{
scanf("%s",str);
if(strstr(str,"010")!=NULL)
printf("Good\n");
else if(strstr(str,"101")!=NULL)
printf("Good\n");
else
printf("Bad\n");
}
return 0; 	
}
 
