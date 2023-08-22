#include<stdio.h>
#include<string.h>
#include<ctype.h>
#include<stdlib.h>
int main() 
{
    char expr[100];
    char operators[5] = {'+', '-', '*', '/','='};
    int len, i, j;
    printf("Enter an expression: ");
    scanf("%s", expr); 
    len = strlen(expr);
    printf("Symbol\t Address\t\t Type");
    printf("\n");
    for(i=0;i<=len;i++)
	{
    printf("\n");
    for (i = 0; i < len; i++) 
	{
    if ((expr[i] >= 'a' && expr[i] <= 'z') || (expr[i] >= 'A' && expr[i] <= 'Z')) 
	{
    printf("%c\t %p\t\t identifier", expr[i], &expr[i]); 
    printf("\n");
    }
    }
    printf("\n");
    for (i = 0; i < len; i++) 
	{
    for (j = 0; j < 5; j++) 
	{
    if (expr[i] == operators[j]) 
	{
    printf("%c\t %p\t\t operator ", expr[i],&expr[i]); 
    printf("\n");
    }
    }
    }
    printf("\n");
}
}
