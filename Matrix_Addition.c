#include<stdio.h>
int main()
{
    int arr[50][50],brr[50][50],i,j,m,n,a,b;
    scanf("%d%d",&m,&n);
    for(i=0;i<m;i++)
    {
        for(j=0;j<n;j++){
        scanf("%d",&arr[i][j]);
        }
    }
    scanf("%d%d",&a,&b);
    for(i=0;i<a;i++)
    {
        for(j=0;j<b;j++){
        scanf("%d",&brr[i][j]);
        }
    }
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
        {
            printf("%d ",arr[i][j]+brr[i][j]);
        }
        printf("
");
    }
}