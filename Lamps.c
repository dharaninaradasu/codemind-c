#include<stdio.h>
int main()
{
    int n,k,x,y;
    scanf("%d%d%d%d",&n,&k,&x,&y);
    if ((k*x)+((n-k)*y)>((k*x)+((n-k)*x))) 
    printf("%d",(k*x)+((n-k)*x));
    else printf("%d",(k*x)+((n-k)*y));
}