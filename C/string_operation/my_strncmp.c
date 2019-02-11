#include <stdio.h>
int my_strncmp(char *,char*,int);

int main()
{
	char ch1[10],ch2[10];
	printf ("Enter the first string\n");
	scanf("%s",ch1);
	printf("Enter the second string\n");
	scanf("%s",ch2);
	if (my_strncmp(ch1,ch2,4)==0)
		printf("same string\n");
	else
		printf("Not same string\n");
}

int my_strncmp(char *ch1,char *ch2,int n)
{
	int i=0;
	while(ch1[i]!='\0' || ch2[i]!='\0' && (i<n))
	{
		if (ch1[i]==ch2[i])
			i++;
		else
		{
			break;
			return -1;
		}
	}
	if(ch1[i] =='\0' || ch2[i]=='\0')
		return 0;
}


