#include <stdio.h>
int my_strcmp(char*,char*);
int main()
{
	char ch1[10],ch2[10];
	int ret;
	printf("Enter the first string\n");
	scanf("%s",ch1);
	printf("Enter the second string\n");
	scanf("%s",ch2);
	ret = my_strcmp(ch1,ch2);
	if (ret==0)
		printf ("string are same\n");
	else
		printf("string are not same\n");
}
int my_strcmp(char *chr1,char *chr2)
{
	int i=0;
	while (*chr1!='\0' || *chr2!='\0')
	{
		if (*chr1 != *chr2)
		{
			break;
			return -1;
		}
		else
		{	chr1++;
			chr2++;
		}
	}
	if (*chr1 =='\0' && *chr2 == '\0')
		{
			return 0;
		}
}
