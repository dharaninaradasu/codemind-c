#include<stdio.h>
int main(){
    int m,n,i,j;
    scanf("%d %d",&m,&n);
    int arr[m][n];
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int c=0,d=0;
    for(i=0;i<m;i++){
        for(j=0;j<n;j++){
            if(arr[i][j]%2==0){
                c=c+arr[i][j];
            }
            else {d=d+arr[i][j];}
        }
    }
    printf("%d %d",c,d);
}