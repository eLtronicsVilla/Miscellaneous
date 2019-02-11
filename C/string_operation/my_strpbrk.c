/*
   This function find the first character in the string s1 that matches any charact
   er specified in s2.It include terminating null-character).

syntax :
char *strpbrk(const char *s1, const char *s2)

s1 : string to be scannned
s2: string containing the character to match 

It retuen a pointer to the character in s1 that matches one of the character in 
s2, else return NULL.

 */

#include <stdio.h>
#include <string.h>

char *my_strpbrk(char *,char*);

int main()
{
	char s1[] = "brijeshwork";
	char s2[] = "zxl";
	char s3[] = "sab";

	char *r , *t;

	//check for matching character 
	// no match found

	r = my_strpbrk(s1,s2);
	if (r!=0)
		printf("first matching charcter :%c\n",*r);
	else
		printf("character not found\n");

	//check for matching character
	//first match found at "s"
	t = my_strpbrk(s1,s3);
	if (t !=0)
		printf("first matching character : %c\n",*t);
	else
		printf("character not found");

	return (0);

}


char *my_strpbrk(char *str1,char *str2)
{
	int i,j;
	for(i=0;str1[i];i++)
	{
		for (j=0;str2[j];j++)
		{
			if (str1[i]==str2[j])
				return str1+i;
		}
	}
	if (str1[i]=='\0')
	 return NULL;
}
