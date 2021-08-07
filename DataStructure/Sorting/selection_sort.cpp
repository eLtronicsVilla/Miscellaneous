// Selection sort - type of internal sort, arranging the data in logical order/dictionary order.
/*
This algorithm sort the array A with N element.
1. loop repeat step 2 and 3 for K=0,1,2,...N-2;
2.call MIN(A,K,N)
3.Interchange A[k] and A[LOC]
	set TEMP=A[K]
		A[K]=A[LOC]
		A[LOC]=TEMP

End of loop 1
4.Exit

*/

#include <bits/stdc++.h>
using namespace std;

int MIN(int arr[],int k,int n)
{
	int j,loc,min;
	min = arr[k];
	loc = k;
	for(j=k;j<=n-1;j++)
	{
		if (min>arr[j])
			{
				min = arr[j];
				loc = j;
			}
	}
	return loc;

}

int main()
{
	int A[]={55,2,67,89,3,11};
	int len = sizeof(A)/sizeof(A[0]);
	int loc ,k,temp;
	for(k=0;k<=len-2;k++)
	{
		loc=MIN(A,k,len);
		temp = A[k];
		A[k]= A[loc];
		A[loc]=temp;
	}

	for(k=0;k<=len-1;k++)
	{
		cout << A[k] <<",";
	}
}