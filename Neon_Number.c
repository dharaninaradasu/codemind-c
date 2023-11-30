#include<stdio.h>
int main()
{
     int n,s=0,a,i,m;
     scanf("%d",&n);
     a=n*n;
     m=n;
 while(a>0)
 {
   i=a%10;
   s=s+i;
   a=a/10;
 }
 if(s==m) printf("Neon Number");
 else printf("Not Neon Number");
}