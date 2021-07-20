// first unique character in the string.
// Example : "techtrics" --> first unque charcher 'e' at index at 1, if "mumu", return -1.

#include <bits/stdc++.h>
#include <vector>
using namespace std;
int findUniqueCharacter(string s)
{
	// Store frequency of all character
	vector<int> frequency(26,0);
	for (int i = 0; i< s.length();i++)
	{
		frequency[ s[i] -'a'] +=1;

	}
	for(int i=0;s[i]!='\0';i++)
	{
		if (frequency[s[i]-'a']== 1)
			return i;
	}
	return -1;

}

int main()
{
	string S = "abab";
	int index;
	index = findUniqueCharacter(S);
	if( index == 1)
		cout <<"first Unique character at index : " << index << endl;
	else
		cout << index<<endl;
}
