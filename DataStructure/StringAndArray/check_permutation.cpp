// Check permutations:
/* Given two strings write a method to decide if one is a permutation of the other.
Confirm from your interviewer, if permutation comparison is case senstive.
God is permutation of dog.
So "god  " is different from dog"
Note : string of different length cannot be 


A permutation of string is another string that contain same characters,
only the order of character can be different.
"abcd" is permutation with "dabc"


*/

// method 1 :
// sort both string
// compare the sorted string

#include <bits/stdc++.h>
using namespace std;

bool arePermutation1(string str1,string str2)
{
	// get the length of both string
	int n1 = str1.length();
	int n2 = str2.length();

	// if the length of both string is not same
	// then they cannot be permutation
	if(n1 != n2)
	{
		return false;
	}
	//sort both string 
	sort(str1.begin(),str1.end());
	sort(str2.begin(),str2.end());

	// check if str1 == str2
	for (int i=0 ; i<n1; i++)
	{
		if (str1[i] != str2[i])
			return false;
	}

	return true;
}

// second method
bool arePermutation2(string str1,string str2)
{
	int arr1[256] = {0};
	int arr2[256] = {0};
	int i;

	for (i = 0; str1[i] && str2[i];i++)
	{
		arr1[str1[i]]++;
		arr2[str2[i]]++;

	}
	//if both the string are of different length , return false.
	if(str1[i] || str2[i])
		return false;

	for (i=0;i<256;i++)
	{
		if (arr1[i]!=arr2[i])
			return false;
	}
	return true;
}	


int main()
{
	string str1 = "abcd";
	string str2 = "dcba";
	if(arePermutation2(str1,str2))
		printf("yes");
	else
		printf("No");
	return 0;
}