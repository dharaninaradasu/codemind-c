#include<stdio.h>
#include<ctype.h>
#include<string.h>
int main()
{
    char s[100001];
    char x[100001];
    scanf("%[^
]",s);
    strcpy(x,s);
    x[100001]=NULL;
    printf("%s",x);
}