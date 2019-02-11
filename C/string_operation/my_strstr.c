#include <stdio.h>
#include <string.h>

char *my_strstr(char *,char *);
int main()
{
	char str[10],sub_str[10];
	printf("Enter the main string\n");
	scanf("%s",str);
	printf("Enter the sub string\n");
	scanf("%s",sub_str);
	printf("string present at %s",my_strstr(str,sub_str));
}

char *my_strstr(char *str,char *sub_str)
{
	int i,j;
	for (i=0;str[i];i++)
	{
		if (str[i]==sub_str[0])
		{
			for (j=1;sub_str[j];j++)
			{
				if(str[i+j]==sub_str[j])
					return str+i;
				else
					return 0;
			}
		}
		//return 0;
	}
}
