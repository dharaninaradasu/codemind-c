#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,i,n;
    scanf("%d%d",&a,&b);
    float s=0;
    for(i=a;i<=b;i++)
    {
        s=s+sqrt(i);
    }
    printf("%.2f",s);
}