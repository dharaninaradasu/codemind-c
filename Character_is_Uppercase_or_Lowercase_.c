#include<stdio.h>
int main()
{
	char a;
	scanf("%c",&a);
	if (a>=65 && a<=90)
	{
	printf("uppercase alphabet");}
	else if (a>=97 && a<=122)
	{
	printf("lowercase alphabet");}
	else printf("not an alphabet");
}