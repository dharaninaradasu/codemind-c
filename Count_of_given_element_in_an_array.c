#include<stdio.h>
int main()
{
    int a,i,s,c=0;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    scanf("%d",&s);
    for(i=0;i<a;i++)
    {
        if(arr[i]==s) c++;
    }
    printf("%d",c);
}