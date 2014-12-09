#include<iostream>
#include<cstdio>
using namespace std;
int main()
{
 int minii(int ,int);
 void initialize(int [],int []);
int t,i,count1[65],count2[65],sum;
char A[10001],B[10001];
scanf("%d",&t);
while(t--)
{
sum=0;
initialize(count1,count2);
scanf("%s",A);
//scanf("%s",empty);
scanf("%s",B);
for(i=0;A[i]!='\0';i++)
{
switch(A[i])
{
case 'a':
        count1[0]++;
        break;
case 'b':
        count1[1]++;
        break;
case 'c':
        count1[2]++;
        break;        
case 'd':
        count1[3]++;
        break;        
 
case 'e':
        count1[4]++;
        break;        
 
case 'f':
        count1[5]++;
        break;        
 
case 'g':
        count1[6]++;
        break;        
 
case 'h':
        count1[7]++;
        break;        
 
case 'i':
        count1[8]++;
        break;        
 
case 'j':
        count1[9]++;
        break;        
 
case 'k':
        count1[10]++;
        break;        
 
case 'l':
        count1[11]++;
        break;        
 
case 'm':
        count1[12]++;
        break;        
 
case 'n':
        count1[13]++;
        break;        
 
case 'o':
        count1[14]++;
        break;        
 
case 'p':
        count1[15]++;
        break;        
 
case 'q':
        count1[16]++;
        break;        
 
case 'r':
        count1[17]++;
        break;        
 
case 's':
        count1[18]++;
        break;        
 
case 't':
        count1[19]++;
        break;        
 
case 'u':
        count1[20]++;
        break;        
 
case 'v':
        count1[21]++;
        break;        
 
case 'w':
        count1[22]++;
        break;        
 
case 'x':
        count1[23]++;
        break;        
 
case 'y':
        count1[24]++;
        break;        
 
case 'z':
        count1[25]++;
        break;        
 
case 'A':
        count1[26]++;
        break;        
 
case 'B':
        count1[27]++;
        break;        
 
case 'C':
        count1[28]++;
        break;        
 
case 'D':
        count1[29]++;
        break;        
 
case 'E':
        count1[30]++;
        break;        
 
case 'F':
        count1[31]++;
        break;        
 
case 'G':
        count1[32]++;
        break;        
 
case 'H':
        count1[33]++;
        break;        
 
case 'I':
        count1[34]++;
        break;        
 
case 'J':
        count1[35]++;
        break;        
 
case 'K':
        count1[36]++;
        break;        
 
case 'L':
        count1[37]++;
        break;        
 
case 'M':
        count1[38]++;
        break;        
 
case 'N':
        count1[39]++;
        break;        
 
case 'O':
        count1[40]++;
        break;        
 
case 'P':
        count1[41]++;
        break;        
 
case 'Q':
        count1[42]++;
        break;        
 
case 'R':
        count1[43]++;
        break;        
 
case 'S':
        count1[44]++;
        break;        
 
case 'T':
        count1[45]++;
        break;        
 
case 'U':
        count1[46]++;
        break;        
 
case 'V':
        count1[47]++;
        break;        
 
case 'W':
        count1[48]++;
        break;        
 
case 'X':
        count1[49]++;
        break;        
 
case 'Y':
        count1[50]++;
        break;        
 
case 'Z':
        count1[51]++;
        break;        
 
case 48:
        count1[52]++;
        break;        
 
case 49:
        count1[53]++;
        break;        
 
case 50:
        count1[54]++;
        break;        
 
case 51:
        count1[55]++;
        break;        
 
case 52:
        count1[56]++;
        break;        
 
case 53:
        count1[57]++;
        break;        
 
case 54:
        count1[58]++;
        break;        
 
case 55:
        count1[59]++;
        break;        
 
case 56:
        count1[60]++;
        break;        
 
case 57:
        count1[61]++;
        break;        
 
}
}
for(i=0;B[i]!='\0';i++)
{
switch(B[i])
{
case 'a':
        count2[0]++;
        break;
case 'b':
        count2[1]++;
        break;
case 'c':
        count2[2]++;
        break;        
case 'd':
        count2[3]++;
        break;        
 
case 'e':
        count2[4]++;
        break;        
 
case 'f':
        count2[5]++;
        break;        
 
case 'g':
        count2[6]++;
        break;        
 
case 'h':
        count2[7]++;
        break;        
 
case 'i':
        count2[8]++;
        break;        
 
case 'j':
        count2[9]++;
        break;        
 
case 'k':
        count2[10]++;
        break;        
 
case 'l':
        count2[11]++;
        break;        
 
case 'm':
        count2[12]++;
        break;        
 
case 'n':
        count2[13]++;
        break;        
 
case 'o':
        count2[14]++;
        break;        
 
case 'p':
        count2[15]++;
        break;        
 
case 'q':
        count2[16]++;
        break;        
 
case 'r':
        count2[17]++;
        break;        
 
case 's':
        count2[18]++;
        break;        
 
case 't':
        count2[19]++;
        break;        
 
case 'u':
        count2[20]++;
        break;        
 
case 'v':
        count2[21]++;
        break;        
 
case 'w':
        count2[22]++;
        break;        
 
case 'x':
        count2[23]++;
        break;        
 
case 'y':
        count2[24]++;
        break;        
 
case 'z':
        count2[25]++;
        break;        
 
case 'A':
        count2[26]++;
        break;        
 
case 'B':
        count2[27]++;
        break;        
 
case 'C':
        count2[28]++;
        break;        
 
case 'D':
        count2[29]++;
        break;        
 
case 'E':
        count2[30]++;
        break;        
 
case 'F':
        count2[31]++;
        break;        
 
case 'G':
        count2[32]++;
        break;        
 
case 'H':
        count2[33]++;
        break;        
 
case 'I':
        count2[34]++;
        break;        
 
case 'J':
        count2[35]++;
        break;        
 
case 'K':
        count2[36]++;
        break;        
 
case 'L':
        count2[37]++;
        break;        
 
case 'M':
        count2[38]++;
        break;        
 
case 'N':
        count2[39]++;
        break;        
 
case 'O':
        count2[40]++;
        break;        
 
case 'P':
        count2[41]++;
        break;        
 
case 'Q':
        count2[42]++;
        break;        
 
case 'R':
        count2[43]++;
        break;        
 
case 'S':
        count2[44]++;
        break;        
 
case 'T':
        count2[45]++;
        break;        
 
case 'U':
        count2[46]++;
        break;        
 
case 'V':
        count2[47]++;
        break;        
 
case 'W':
        count2[48]++;
        break;        
 
case 'X':
        count2[49]++;
        break;        
 
case 'Y':
        count2[50]++;
        break;        
 
case 'Z':
        count2[51]++;
        break;        
 
case 48:
        count2[52]++;
        break;        
 
case 49:
        count2[53]++;
        break;        
 
case 50:
        count2[54]++;
        break;        
 
case 51:
        count2[55]++;
        break;        
 
case 52:
        count2[56]++;
        break;        
 
case 53:
        count2[57]++;
        break;        
 
case 54:
        count2[58]++;
        break;        
 
case 55:
        count2[59]++;
        break;        
 
case 56:
        count2[60]++;
        break;        
 
case 57:
        count2[61]++;
        break;        
 
}
}
for(i=0;i<62;i++)
{
sum=sum+minii(count1[i],count2[i]);
}
printf("%d\n",sum);
}
return 0;
}
void initialize(int count1[],int count2[])
{
for(int i=0;i<65;i++)
count1[i]=0;
for(int j=0;j<65;j++)
count2[j]=0;
}
int minii(int val1,int val2)
{
return val1>=val2?val2:val1;
}
