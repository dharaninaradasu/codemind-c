#include<stdio.h>
int main()
{
    int n,i,a;
    scanf("%d",&n);
    for(i=n*2;i>=1;i--)
    {
        if(i%2==0){
        printf("%d ",i);
        }
    }
}