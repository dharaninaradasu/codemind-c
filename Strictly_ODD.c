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
    int c=1; 
    for(i=0;i<a;i++)
    {
      if(arr[i]%2!=0 && i%2==0) {
          c = 0;
          break;
      }
    }
    if(c==1) printf("True");
    else printf("False");
}