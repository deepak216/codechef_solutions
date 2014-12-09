#include<stdio.h>
#include<string.h>
//using namespace std;
int main()
{
char s[201];
int n,count,t,i,j,ar[53]={0};
scanf("%d",&t);
while(t--)
{
 
count=0;
for(i=0;i<52;i++)
ar[i]=0;
scanf(" %s",s);
n=strlen(s);
for(i=0;i<n;i++)
{
switch(s[i])
{
 
case 'a':
     ar[0]++;
     break;
case 'b':
     ar[1]++;
     break;
 
case 'c':
     ar[2]++;
     break;
 
case 'd':
     ar[3]++;
     break;
 
case 'e':
     ar[4]++;
     break;
 
case 'f':
     ar[5]++;
     break;
 
case 'g':
     ar[6]++;
     break;
 
case 'h':
     ar[7]++;
     break;
 
case 'i':
     ar[8]++;
     break;
 
case 'j':
     ar[9]++;
     break;
 
case 'k':
     ar[10]++;
     break;
 
case 'l':
     ar[11]++;
     break;
 
case 'm':
     ar[12]++;
     break;
 
case 'n':
     ar[13]++;
     break;
 
case 'o':
     ar[14]++;
     break;
 
case 'p':
     ar[15]++;
     break;
 
case 'q':
     ar[16]++;
     break;
 
case 'r':
     ar[17]++;
     break;
 
case 's':
     ar[18]++;
     break;
 
case 't':
     ar[19]++;
     break;
 
case 'u':
     ar[20]++;
     break;
 
case 'v':
     ar[21]++;
     break;
 
case 'w':
     ar[22]++;
     break;
 
case 'x':
     ar[23]++;
     break;
 
case 'y':
     ar[24]++;
     break;
 
case 'z':
     ar[25]++;
     break;
 
case 'A':
     ar[26]++;
     break;
 
case 'B':
     ar[27]++;
     break;
 
case 'C':
     ar[28]++;
     break;
     
case 'D':
     ar[29]++;
     break;
 
case 'E':
     ar[30]++;
     break;
 
case 'F':
     ar[31]++;
     break;
 
case 'G':
     ar[32]++;
     break;
 
case 'H':
     ar[33]++;
     break;
 
case 'I':
     ar[34]++;
     break;
 
case 'J':
     ar[35]++;
     break;
 
case 'K':
     ar[36]++;
     break;
 
case 'L':
     ar[37]++;
     break;
 
case 'M':
     ar[38]++;
     break;
 
case 'N':
     ar[39]++;
     break;
 
case 'O':
     ar[40]++;
     break;
 
case 'P':
     ar[41]++;
     break;
 
case 'Q':
     ar[42]++;
     break;
 
case 'R':
     ar[43]++;
     break;
 
case 'S':
     ar[44]++;
     break;
 
case 'T':
     ar[45]++;
     break;
 
case 'U':
     ar[46]++;
     break;
 
case 'V':
     ar[47]++;
     break;
 
case 'W':
     ar[48]++;
     break;
 
case 'X':
     ar[49]++;
     break;
 
case 'Y':
     ar[50]++;
     break;
 
case 'Z':
     ar[51]++;
     break;
 
}
}
for(j=0;j<52;j++)
{
count=count+(ar[j]/2)+(ar[j]%2);
}
printf("%d\n",count);
}
 
return 0;
}
