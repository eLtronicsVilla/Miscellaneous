// Impliment an algorithm to determine if a string has all unique characters("no duplicates").
// what if you can't use additional data structure. ASCII character 128/256
#include <bits/stdc++.h>
#include <string>
using namespace std;

// we can also save our spac by a factor of 8 using bit operator.

bool isUniqueChars_usingBit(string str)
{
	int check = 0;
	for (int i = 0;i<str.length();i++)
	{
		//get the string ASCII value
		int value = str[i]-'a';
		if((check & (1<<value)) >0)
		{
			// Already found this character
			return false;
		}
		check |= (1<<value);
	}
	return true;
}

bool isUniqueChars(string str)
{
	if(str.length() > 128)
	{
		return false;
	}
	bool char_set[128] = {false};
	for (int i = 0;i<str.length();i++)
	{
		//get the string ASCII value
		int val = str[i];
		if(char_set[val])
		{
			// Already found this character
			return false;
		}
		char_set[val] = true;
	}
	return true;
} // time complexity is O(n) where n is length of string.
// space complexity is O(1)

int main()
{
	//bool result = isUniqueChars("fnun");
	bool result = isUniqueChars_usingBit("faghcvvun");
	if(result==true)
		cout <<"Yes unique character"<<endl;
	else
		cout<<"No unique character"<<endl;
}


