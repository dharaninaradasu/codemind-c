#include<stdio.h>
int main()
{
    float i,n,b,a=0;
    scanf("%f",&n);
    for(i=1;i<=n;i++)
    {
        b=1/i;
        a=a+b;
    }
    printf("%.2f",a);
}