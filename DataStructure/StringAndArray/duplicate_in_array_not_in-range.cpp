// find duplicate in array when element are not limited to a range.

#include <bits/stdc++.h>
using namespace std;

void find_duplicate(int *arr,int size)
{
	bool ifPresent = false;

	// array list to store output.
	vector<int> al;

	for (int i = 0; i<size-1 ;i++)
	{
		for (int j = i+1;j<size;j++)
		{
			if(arr[i]==arr[j])
			{
				// check if element is present in the ArrayList
				// or not if present then break;
				auto it = std::find(al.begin(),al.end(),arr[i]);

				if(it!=al.end())
				{
					break;
				}
				// if element is not present in the ArrayList then add it to ArrayList
				// and make ifPresent is true.
				else
				{
					al.push_back(arr[i]);
					ifPresent = true;
				}

			}
		}
	}

	// If duplicate is present then print ArrayList

	if(ifPresent==true)
	{
		//cout << "[" <<al[0] << " ,";
		for(int i = 0; i< al.size() ;i++)
		{
			cout<<al[i] << endl;
		}
		//cout<<al[al.size()-1] << "]";

	}
	else
	{
		cout<<"No duplicate present in arrays";
	}
}
int main()
{
	int arr[6] = {5,3,4,5,6,9};
	int size = sizeof(arr)/sizeof(arr[0]);
	find_duplicate(arr,size);
	return 0;
}
