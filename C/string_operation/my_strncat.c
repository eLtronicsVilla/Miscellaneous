#include <stdio.h>
char *my_strncat(char *, char *, int );

int main()
{
char ch1[10],ch2[10];
printf("Enter the first string\n");
scanf("%s",ch1);
printf("Enter the second string\n");
scanf("%s",ch2);
printf("%s",my_strncat(ch1,ch2,4));
}

char *my_strncat(char *ch1, char *ch2, int n)
{
int i,len=0;
for (i=0;ch1[i];i++)
len++;
for ( i=0;ch2[i]!='\0' && (i<n) ;i++ )
{
ch1[len++]=ch2[i];
}
ch1[len]='\0';

return ch1;
}
