#include<stdio.h>
int main()
{
    int n;
    scanf("%d",&n);
    int a=0,b=1,c=a+b;
    while(c<n)
    {
        a=b;
        b=c;
        c=a+c;
    }
    if(c==n) printf("True");
    else printf("False");
}