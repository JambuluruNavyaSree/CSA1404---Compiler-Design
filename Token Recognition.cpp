#include<stdio.h>
#include<ctype.h>
int main()
{
	int i,idp=0,opp=0,chp=0;
	char a[100],id[100],op[100],ch[100];
	printf("Entre a string:");
	gets(a);

	for(i=0;a[i]!='\0';i++)
	{
		if(isdigit(a[i]))
		{
			ch[chp]=a[i];
			chp++;
		}
		else if(isalpha(a[i]))
		{
			id[idp]=a[i];
			idp++;
		}
		else
		{
			op[opp]=a[i];
			opp++;
		}
	}
	printf("Identifiers : ");
     for(i=0;i<idp;i++)
	 {
        printf("%c ",id[i]);
     }
    printf("\nConstants : ");
     for(i=0;i<chp;i++)
	 {
        printf("%c ",ch[i]);
     }
    printf("\nOperators : ");
      for(i=0;i<opp;i++)
	  {
        printf("%c ",op[i]);
      }
}
