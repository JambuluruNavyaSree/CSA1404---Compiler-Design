#include<stdio.h>
#include<string.h>
int main()
{
	int n,i,j=0,n1=0,n2=0;
	char a[100],b[100],c[200];
	printf("Enter production example(S->aab/abc): ");
	gets(a);
	for(i=3;a[i]!='/';i++,j++)
	{
		b[j]=a[i];
		n1++;
	}
	i++;
	for(j=0;a[i]!='\0';i++,j++)
	{
		c[j]=a[i];
		n2++;
	}
	printf("%c->",a[0]);
	for(i=0;i<strlen(b)||i<strlen(c);i++)
	{
		if(b[i]!=c[i])
		{
			break;
		}
		else
		{
			printf("%c",b[i]);
		}
		
	}
	printf("%c'\n%c'->",a[0],a[0]);
	j=i;
	for(;i<strlen(b);i++)
	{
		printf("%c",b[i]);
	}
	printf("/");
	for(;j<strlen(c);j++)
	{
		printf("%c",c[j]);
	}
}

