// modified bubble sort technique.
// before modifying it time complexity was O(n^2)
// After modifying the time complexity was O(n) in best case.

#include <bits/stdc++.h>
using namespace std;

void modified_sort(int arr[],int len)
{
	int i,j, temp,flag;
	for (i=1;i<=len-1;i++)
	{
		flag=0;
		for (j=0;j<=len-1-i;j++)
		{
			if(arr[j]>arr[j+1])
			{
				temp = arr[j];
				arr[j] = arr[j+1];
				arr[j+1] = temp;
				flag=1;
			}
		}

		if(flag==0)
			return ;

	}
}

int main()
{
	int arr[] = {1,6,3,8,18,15,23,20};
	int len = sizeof(arr)/sizeof(arr[0]);
	modified_sort(arr,len);
	for (int i=0;i<len;i++)
	{
		cout <<arr[i]<<",";
	}
}