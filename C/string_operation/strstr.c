#include <stdio.h>
#include <string.h>

int main()
{
char str[10],sub_str[10];
printf("Enter the main string\n");
scanf("%s",str);
printf("Enter the sub string\n");
scanf("%s",sub_str);
printf("string present at %s",strstr(str,sub_str));
}
