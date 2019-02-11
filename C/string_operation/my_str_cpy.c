#include <stdio.h>

char *my_strcpy(char*,char*);
int main()
{
char src[]="abc", dest[]="def";
printf("%s",my_strcpy(src,dest));
}

char *my_strcpy(char *source, char *destination)
{
int i;
for (i=0;destination[i];i++)
source[i]=destination[i];

source[i]='\0';
return source;
}
