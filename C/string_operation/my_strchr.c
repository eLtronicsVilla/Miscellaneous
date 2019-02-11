// return pointer to the first occurance of character
//syntax:  

#include <stdio.h>
#include <string.h>

char *my_strchr(char *,char );

int main()
{
	char ch1[10],ch;
	char *chr;
	printf ("Enter the first string\n");
	scanf ("%s",ch1);
	printf("Enter the character\n");
	scanf(" %c",&ch);

	chr = my_strchr(ch1,ch);
	if (chr==NULL)
		printf("character %c is not find in string\n",ch);
	else
		printf("character %c is find at place %s\n",ch,chr);
}

char *my_strchr(char *ch1,char ch)
{
	int i=0;
	for (i=0;ch1[i];i++)
	{
		if (ch1[i]==ch)
		{
			return ch1+i;
		}
	}
			return NULL;
}
