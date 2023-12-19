#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0;
    for(i=0;i<a;i++)
    {
        if(i%2==1 && arr[i]%2==0)
        {
        c=1;
        break;
        }
    }
    if(c==1) printf("False");
    else printf("True");
}