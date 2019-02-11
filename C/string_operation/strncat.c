#include <stdio.h>
#include <string.h>

int main()
{
char ch1[10],ch2[10];
printf ("Enter the first string\n");
scanf("%s",ch1);
printf("Enter the second string\n");
scanf("%s",ch2);
printf("%s",strncat(ch1,ch2,4));
}
