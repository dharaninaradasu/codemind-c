#include<stdio.h>
#include<math.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++)
    {
        scanf("%d",&arr[i]);
    }
    int c=0,d=0;
    for(i=0;i<a;i++)
    {
        if(i%2==0) c=c+arr[i];
        else d=d+arr[i];
    }
    printf("%d",abs(c-d));
}