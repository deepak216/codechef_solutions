import sys
import math
t=input();
while(t>0):
       
            n=input();
            n=n*n;
            p=n;
            q=n;
            p=5*p;
            q=5*q;
            p=p-4;
            q=q+4;
            s=int(math.sqrt(p));
            d=int(math.sqrt(q));
            if(s*s==p or d*d==q):
              print "is fibo";
            else :
              print "not fibo"
        
            t=t-1;
 
