#include<stdio.h>
int main()
{
    int a,i;
    scanf("%d",&a);
    int arr[a];
    for(i=0;i<a;i++){
    scanf("%d",&arr[i]);
    }
    int c=0;
    for(i=0;i<a;i++)
    {
        if(arr[i]%2==0) c++;
    }
    if(c==a) printf("True");
    else printf("False");
}