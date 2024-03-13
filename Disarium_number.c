#include<stdio.h>
#include<math.h>
int main(){
    int n,i=0,s,j=0;
    scanf("%d",&n);
    int t=n;
    int r=n,m;
    while(r>0){
        m=r%10;
         j++;
         r=r/10;
    }
    while(n>0){
        s=n%10;
        i=i+(pow(s,j));
        n=n/10;
        j--;
    }
    if(t==i) printf("True");
    else printf("False");
}