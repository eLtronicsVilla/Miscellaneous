/* 

   strcoll is a built-in library function and it is declared in < string.h>
   header file. this function compares the string pointed to by str1 with the one pointed by str2.The strcoll() function performs the comparision based on the rules of the current locales LC_COL-LATE.


   int strcoll(const char *str1, const char *str2)

   function strcoll() takes two string as parameter and return an integer value .

   less than zero  ----  str1 is less than str2
   zero            ----  str1 is equal to str2
   greater than zero ---- 


 */

#include <stdio.h>
#include <string.h>


int main()
{
	char str1[10];
	char str2[10];
	int ret;

	strcpy(str2, "geegsforgeegs");
	strcpy(str1, "GEEGSFORGEEGS");

	ret = strcoll(str1,str2);

	if (ret >0 )
	{
		printf("str1 is less than str2\n");
	}
	else if (ret <0)
	{
		printf("str1 is greater than str2\n");
	}
	else
	{
		printf ("str1 is equal to str2\n");
	}
	return 0;
}

