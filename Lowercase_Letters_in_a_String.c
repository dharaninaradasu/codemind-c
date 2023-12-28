#include<stdio.h>
#include<string.h>
int main()
{
    char s[10001];
    scanf("%[^
]",s);
    int i,c=0;
    for(i=0;s[i]!=0;i++)
    {
        if(s[i]>='a' && s[i]<='z') c++;
    }
    printf("%d",c);
}