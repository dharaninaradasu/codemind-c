#include<stdio.h>
int main()
{
    char s[10001],a;
    scanf("%[^
] %c",&s,&a);
    int i,c=0;
    for(i=0;s[i]!=NULL;i++)
    {
        if(s[i]==a) {
            printf("True
");
            printf("%d",i);
            c++;
            break;
        }
    }
    if(c==0) printf("False");
}