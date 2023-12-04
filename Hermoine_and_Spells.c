#include<stdio.h>
int main()
{
    int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && b>c) printf("%d",a+b);
    else if(a>c && c>b) printf("%d",a+c);
    else if(b>c && c>a) printf("%d",b+c);
    else if(c>b && b>a) printf("%d",c+b);
    else if(b>a && a>c) printf("%d",b+a);
    if(c>a && a>b) printf("%d",c+a);

}