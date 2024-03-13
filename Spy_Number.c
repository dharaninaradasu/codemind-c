#include<stdio.h>
int main(){
    int n,c=0,d=1,i,j;
    scanf("%d",&n);
    while(n>0){
        i=n%10;
        c=c+i;
        d=d*i;
        n=n/10;
    }
    if(c==d) printf("Spy Number");
    else printf("Not Spy Number");
}