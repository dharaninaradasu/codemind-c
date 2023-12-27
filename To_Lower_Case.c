#include<stdio.h>
int main()
{
    char str[10001];
    scanf("%[^
]",str);
    int i;
    for(i=0;str[i]!=NULL;i++){
       if(str[i]>='A' && str[i]<='Z')
       str[i]+=32;
    }
    printf("%s",str);
}