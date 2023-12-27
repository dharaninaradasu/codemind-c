#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    char a[100001];
    char b[100001];
    scanf("%s%s",a,b);
    if(strcmp(a,b)==0) printf("Strings are Equal");
    else printf("Strings are not Equal");
}