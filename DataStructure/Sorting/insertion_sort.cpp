// Insertion sort
/*
INS_SORT(A,N): A is an array with N element 

1. I=1
2. Repeat step 3 to 5 while I<N
3. temp=A[i], j=I-1
4. repeat while j>=0 and temp<A[j]
	 A[j+1]=A[j] and j=j-1
5. A[j+1]=temp, I=I+1
6. Exit

*/
#include <bits/stdc++.h>
using namespace std;

void insertion_sort(int arr[],int n)
{
	int i,j,temp;
	for(i=1;i<n;i++)
	{
		temp= arr[i];
		for(j=i-1;j>=0 && temp<arr[j];j--)
			arr[j+1] = arr[j];
		arr[j+1] = temp;
	}
}

int main()
{
	int A[] = {34,45,11,89,34,3,9};
	int len = sizeof(A)/sizeof(A[0]);
	insertion_sort(A,len);
	for(int i=0;i<len;i++)
	{
		cout<<A[i]<<",";
	}
}