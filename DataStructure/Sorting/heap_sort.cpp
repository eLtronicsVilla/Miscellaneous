// Heap sort algorithm
#include <iostream>
using namespace std;



void maxHeapify(int A[],int n, int i)
{
	int largest =i;
	int l = 2*i;
	int r = 2*i +1;

	if (l<n && A[l]>A[largest])
	{
		largest = l;
	}
	if (r <n && A[r]>A[largest])
	{
		largest = r;
	}
	if (largest!= i )
	{
		swap(A[i],A[largest]);
		maxHeapify(A,n,largest);
	}
}

void heapSort(int A[],int n)
{
	for (int i=n/2-1; i>=0; i--) // to build max heap
	{
		maxHeapify(A,n,i);
	}
	// one by one extract an element from heap
	for(int i=n-1;i>=0;i--) // to delete
	{
		// move current root to end
		swap(A[0],A[i]);
		// call max heapify on the reduced heap
		maxHeapify(A,i,0);
	}
}
void printArray(int arr[],int n)
{
	for (int i=0;i<n;i++)
	{
		cout << arr[i] << ",";
	}
}

int main()
{
	int arr [] = {12,11,13,5,6,7};
	int n = sizeof(arr)/sizeof(arr[0]);
	heapSort(arr,n);

	// sorted array
	printArray(arr,n);
}