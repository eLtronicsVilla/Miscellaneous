#include <iostream>
#include <string.h>
using namespace std;

//maximum length of string after modification

// replace the space of string with 20% and 
// return new length of modified string. It return -1
// if modified string cannot be stored in str[]

char* replaceSpace(char str[])
{
	//count the space and find current length
	int i,MAX,space_count=0;
	MAX=strlen(str);
	cout<<MAX<<endl;
	for (i=0; str[i];i++)
		if (str[i] == ' ')
			space_count++;

	cout<<space_count;	
	// remove trailing spaces
	while(str[i-1] == ' ')
	{
		space_count--;
		i--;
	}
	cout<<"new_space_count="<<space_count<<endl;
	// find new length
	int new_length = i+ space_count *2 +1;
	cout<<"new_length"<<new_length<<endl;

	//new length must be greater than length
	//of string provided

	//if (new_length >MAX)
	//	exit(0);


	//start filling character from end
	int index = new_length -1;

	// fill string termination
	str[index--] = '\0';

	//fill rest of the string from end
	for (int j=i-1;j>=0;j--)
	{
		//insert %20 in place of space
		if (str[j] == ' ')
		{
			str[index] = '0';
			str[index-1] = '2';
			str[index-2] = '%';
			index = index -3;
		}
		else
		{
			str[index] =str [j];
			index--;
		}
	}
	return str;
}
//driver code
int main()
{
	char str[] = "my name is brijesh";

	//place the replace string

	char *new_str = replaceSpace(str);
	//for(int i=0 ; i <new_length;i++)
	cout<<str;
	return 0;
}

