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
    for(i=1;i<a-1;i++)
    {
        if(arr[i]%2==0 && arr[i+1]%2==1 && arr[i-1]%2==1)
        c++;
    }
    printf("%d",c);
}
