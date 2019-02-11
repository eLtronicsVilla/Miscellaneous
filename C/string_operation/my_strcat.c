#include <stdio.h>
#include <string.h>

char * my_strcat(char *, const char *);

int main()
{
char ch1[10], ch2[10];
puts("Enter the first string\n");
gets(ch1);
puts("Enter the second string\n");
gets(ch2);
printf ("%s",my_strcat(ch1,ch2));
}

char *my_strcat(char *str1,const char *str2)
{
int len,i;
len = strlen(str1);
for (i=0;str2[i];i++)
str1[len++] =str2[i];
str1[len]='\0';
return str1;  
}
