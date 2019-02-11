/*
usages of strncpy() function , we have used function memset() to clear the memory location.


#include <stdio.h>
#include <string.h>

int main()
{
char src[40];
char dest[12];

memset(dest, '\0',sizeof(dest));
strcpy(src,"This is tutorialspoint.com");
strncpy(dest,src,10);

printf("Final copied string : %s\n",dest);

return 0;
}

*/
#include <stdio.h>
char *my_strncpy(char *,char*,int);
int main()
{
char ch1[10],ch2[10];
puts ("Enter the first string\n");
gets(ch1);
puts("Enter the second string\n");
gets(ch2);
printf("%s",my_strncpy(ch1,ch2,4));
}

char *my_strncpy(char *ch1,char*ch2,int n)
{
int i=0;
for (i=0;ch1[i] && (i<n) ;i++)
ch1[i]=ch2[i];
ch1[i]='\0';
return ch1;
}


