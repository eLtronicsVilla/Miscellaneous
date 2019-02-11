/* memset() is used to fill a block of memory with a particular value.
void *memset(void *ptr, int x , size_t n)
*/

#include <stdio.h>
#include <string.h>

int main()
{
char str[50] = "GeegsForGeegs is for programming";
printf("\n Before memset() : %s\n",str);

//fill 8 character starting from str[13] with '.'
memset(str + 13 , '.' ,8*sizeof(char));
printf("After memset() : %s",str);
return 0;
}
