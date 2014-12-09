#include<iostream>
#include<cstdio>
#include<string.h>
#include<cstdlib>
using namespace std;
 
int main()
{
int make_count(char [],char);
char J[101],s[101],temp[101];
int t,j,count,i,k,l;
 
scanf("%d",&t);
while(t--)
{
	for(l=0;l<101;l++)
temp[l]='#';
j=0;count=0;
scanf("%s%s",J,s);
for(i=0;J[i]!='\0';i++);
for(k=0;k<i;k++)
{
switch(J[k])
{
case 'A':
        temp[0]=J[k];
        break;
case 'B':
        temp[1]=J[k];
        break;
case 'C':
        temp[2]=J[k];
        break;
case 'D':
        temp[3]=J[k];
        break;
case 'E':
        temp[4]=J[k];
        break;
case 'F':
        temp[5]=J[k];
        break;
case 'G':
        temp[6]=J[k];
        break;
case 'H':
        temp[7]=J[k];
        break;
case 'I':
        temp[8]=J[k];
        break;
case 'J':
        temp[9]=J[k];
        break;
case 'K':
        temp[10]=J[k];
        break;
case 'L':
        temp[11]=J[k];
        break;
case 'M':
        temp[12]=J[k];
        break;
case 'N':
        temp[13]=J[k];
        break;
case 'O':
        temp[14]=J[k];
        break;
case 'P':
        temp[15]=J[k];
        break;
case 'Q':
        temp[16]=J[k];
        break;
case 'R':
        temp[17]=J[k];
        break;
case 'S':
        temp[18]=J[k];
        break;
case 'T':
        temp[19]=J[k];
        break;
case 'U':
        temp[20]=J[k];
        break;
case 'V':
        temp[21]=J[k];
        break;
case 'W':
        temp[22]=J[k];
        break;
case 'X':
        temp[23]=J[k];
        break;
case 'Y':
        temp[24]=J[k];
        break;
case 'Z':
        temp[25]=J[k];
        break;
case 'a':
        temp[26]=J[k];
        break;
case 'b':
        temp[27]=J[k];
        break;
case 'c':
        temp[28]=J[k];
        break;
case 'd':
        temp[29]=J[k];
        break;
case 'e':
        temp[30]=J[k];
        break;
case 'f':
        temp[31]=J[k];
        break;
case 'g':
        temp[32]=J[k];
        break;
case 'h':
        temp[33]=J[k];
        break;
case 'i':
        temp[34]=J[k];
        break;
case 'j':
        temp[35]=J[k];
        break;
case 'k':
        temp[36]=J[k];
        break;
case 'l':
        temp[37]=J[k];
        break;
case 'm':
        temp[38]=J[k];
        break;
case 'n':
        temp[39]=J[k];
        break;
case 'o':
        temp[40]=J[k];
        break;
case 'p':
        temp[41]=J[k];
        break;
case 'q':
        temp[42]=J[k];
        break;
case 'r':
        temp[43]=J[k];
        break;
case 's':
        temp[44]=J[k];
        break;
case 't':
        temp[45]=J[k];
        break;
case 'u':
        temp[46]=J[k];
        break;
case 'v':
        temp[47]=J[k];
        break;
case 'w':
        temp[48]=J[k];
        break;
case 'x':
        temp[49]=J[k];
        break;
case 'y':
        temp[50]=J[k];
        break;
case 'z':
        temp[51]=J[k];
        break;
}
}
 
for(j=0;j<52;j++)
{
count=count+make_count(s,temp[j]);
//printf("\t%d\n",count);
}
printf("%d\n",count);
}
return 0;
}
int make_count(char s[],char ch)
{
int value=0;
for(int i=0;s[i]!='\0';i++)
{
if(ch=='#')
break;
if(ch==s[i])
value++;
}
return value;
}
