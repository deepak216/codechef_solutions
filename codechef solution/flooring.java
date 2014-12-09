import java.io.*;
import java.math.*;
import java.util.*;
class flooring6
{
public static void main(String args[])throws IOException
{
BufferedReader bf=new BufferedReader(new InputStreamReader(System.in));
String s;
int t;
long n,m,ans,ans1,ans2,ans3,temp;
s=bf.readLine();
t=Integer.parseInt(s);
while(t>0)
{
 int i,sq,k; 
 long sum=0,a,lo,up;
 ans=0;ans1=0;ans2=0;ans3=0;temp=0;
 String in[]=bf.readLine().split(" ");
 n=Long.parseLong(in[0]);
 m=Long.parseLong(in[1]);
 if(n==1)
 {
 long x=1;
 x=x%m;
 System.out.println(x);
 }
 else if(n==2)
 {
 long x=18;
 x=x%m;
 System.out.println(x);
 }
 
 else
 {
 long j,k1;
 sq=(int)Math.sqrt(n);
 for(i=1;i<=sq;i++)
 {
 k1=n/i;
 a=((((i%m)*(i%m))%m)*(((i%m)*(i%m))%m))%m;
 a=((k1%m)*a)%m;
 //System.out.println(a);
 sum=(sum+a)%m;
 }
 //System.out.println(sum);
 for(i=1;i<=sq;i++)
 {
 k=i;
 lo=(n/i);
 up=n/(i+1);
 j=up+1;
 if(j!=k)
 {
 
 ans2=compute(lo,k,m);
 //System.out.println(ans2);
 //s=bf.readLine(); 
 ans1=compute(up,k,m);
 //System.out.println(ans1);
 temp=(ans2-ans1)%m;
 if(temp<0)
 {
 temp=-(1*temp);
 temp=(m-(temp%m))%m;
 }
 ans3=(ans3+temp)%m;
 //System.out.println(ans3);
 //ans=(ans+compute(lo,k,m)-compute(up,k,m))%m;
 }
 }
 ans=(ans3+sum)%m;
 System.out.println(ans);
 }
  t--;
}
}
 
static long compute(long  n,int k,long m)
{
 
long a,b,c,ans,y,sum=0;
a=n;
b=n+1;
c=2*n+1;
if(a%5==0||b%5==0||c%5==0)
{	
	y=(((3%m)*((n%m)*(n%m))%m)%m+(3%m)*(n%m)-1)%m;
if(a%5==0)	
{
	
	a=a/5;
	if(a%6==0)
	{
		a=a/6;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
	}
	else if(b%6==0)
	{
		b=b/6;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;
	}
	else if(c%6==0)
	{
		c=c/6;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
	}
	
	else if(a%2==0&&b%3==0)
	{
		a=a/2;b=b/3;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
	}
	
	else if(a%3==0&&b%2==0)
	{
		a=a/3;b=b/2; 
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
	}
	
	else if(a%2==0&&c%3==0)
	{
		a=a/2;c=c/3;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
    }
	
	else if(b%2==0&&c%3==0)
	{
		b=b/2;c=c/3;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
	}
	
}
else if(b%5==0)	
{
	b=b/5;
	
	if(b%6==0)
	{
		b=b/6;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
	}
	
	else if(a%6==0)
	{
		a=a/6;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
	}
	
	else if(c%6==0)
	{
		c=c/6; 
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
	}
	
	else if(a%2==0&&c%3==0)
	{
	a=a/2;c=c/3;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
	}
	
	else if(a%2==0&&b%3==0)
	{
	a=a/2;b=b/3; 
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;		
	}
	
	else if(a%3==0&&b%2==0)
	{
		
	a=a/3;b=b/2;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;		
	}
	
	else if(b%2==0&&c%3==0)
	{
		b=b/2;c=c/3;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
	}
}
else if(c%5==0)
{
	
	c=c/5;
	if(a%6==0)
	{
		a=a/6;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
	}
	
	else if(b%6==0)
	{
		b=b/6; 
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
	}
	
	else if(a%2==0&&b%3==0)
	{
		a=a/2;b=b/3;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
	}
	
	else if(a%3==0&&b%2==0)
	{
		a=a/3;b=b/2; 
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;
	}
	
	else if(a%2==0&&c%3==0)
	{
		a=a/2;c=c/3;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*k)%m;	
	}
	
	else if(b%2==0&&c%3==0)
	{
		b=b/2;c=c/3;
    ans=((((a%m)*(b%m))%m)*(c%m))%m;
    ans=(ans*y)%m;
    return (ans*(k%m))%m;
	}
}
}
else 
{
	long  z;
	z=((n%m)*(n%m))%m;
	z=((z%m)*(z%m))%m;
    sum=(sum%m+(compute(n-1,k,m)%m)+((z%m)*(k%m))%m)%m;
 
}
return sum;
}
 
} 
