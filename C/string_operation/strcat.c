#include <stdio.h>
#include <string.h>
#include <stdlib.h>

int main()
{
char ch1[10], ch2[10];
puts("Enter the first string\n");
gets(ch1);
puts("Enter the second string\n");
gets(ch2);
printf("%s",strcat(ch1,ch2));
}
