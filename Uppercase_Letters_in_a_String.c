#include<stdio.h>
//#include<string.h>
#include<ctype.h>
int main()
{
    char s[1001];
    scanf("%[^
]",s);
    int c=0,i;
    for(i=0;s[i]!=NULL;i++)
    {
        if(isupper(s[i])) c++;
    }
   printf("%d",c++);
}