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

int main()
{

char s1[] = "brijeshwork";
char s2[] = "zxl";
char s3[] = "sai";

char *r , *t;

//check for matching character 
// no match found

r = strpbrk(s1,s2);
if (r!=0)
printf("first matching charcter :%c\n",*r);
else
printf("character not found\n");

//check for matching character
//first match found at "s"
t = strpbrk(s1,s3);
if (t !=0)
printf("first matching character : %c\n",*t);
else
printf("character not found");

return (0);

}

