#include <stdio.h>
#include <string.h>

int main()
{
char ch1[10],ch2[10];
int n;
printf("Enter the first string\n");
scanf("%s",ch1);
printf("Enter the second string\n");
scanf("%s",ch2);
if ((strncmp(ch1,ch2,4))==0)
printf("same string\n");
else
printf("Not same string\n");
}
