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
    float sum=0;
    for(i=0;i<a;i++)
    {
        sum=sum+arr[i];
    }
    float av=floor(sum/a);
    int c=0;
    for(i=0;i<a;i++)
    {
       if(arr[i]<=av) c++;
    }
    printf("%d",c);
    
}