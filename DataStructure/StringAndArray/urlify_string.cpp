// replace %a in the string whenever space is find.

#include <stdio.h>

const int MAX = 1000;
int replaceSpaces(char str[])
{
	int space_count=0,i;
	for(i=0;str[i];i++)
		if (str[i]==' ')
			space_count++;

		//REMOVE trialing space
		while(str[i-1] == ' ')
		{
			space_count--;
			i--;
		}
		//find new length
		int new_length = i+ space_count*2+1;

		//new lngth must be smaller than length of string provided
		if(new_length > MAX)
			return -1;

		//start filling character from end
		int index = new_length -1;

		//fill string termination 
		str[index--] = '\0';

		//fill rest of the string from end
		for(int j=i-1;j>=0;j--)
		{
			//insert %20 in place of space
			if(str[j] == ' ')
			{
				str[index] = '0';
				str[index-1] = '2';
				str[index-2] = '%';
				index = index-3;
			}
			else
			{
				str[index] = str[j];
				index--;
			}
			
		}
	return new_length;	
}

int main()
{
	char str[MAX] = "Mr John Smith   " ;
	//print the replace string
	int new_length = replaceSpaces(str);
	for(int i=0;i<new_length;i++)
	{
		printf("%c",str[i]);
	}
}