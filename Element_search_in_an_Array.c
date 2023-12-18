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
    int s,flag=0;
    scanf("%d",&s);
    for(i=0;i<a;i++)
    {
        if(arr[i]==s)
    flag++;
    }
    if(flag>0) printf("True");
    else printf("False");
}