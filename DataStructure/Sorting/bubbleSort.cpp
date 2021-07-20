// Bubble sort 
// iterate over n-1 size for loop and compare left and right element .


#include <iostream>
using namespace std;

void bubble_sort(int *arr,int ele_size)
{
	for (int j=0; j< ele_size-1;j++)
	{
		for (int i=0;i<ele_size-j-1;i++)
		{
			if (arr[i+1] < arr[i])
			{
				int temp = arr[i+1];
				arr[i+1] = arr[i];
				arr[i] = temp;
			}
			
		}
	}
	for (int i=0;i<ele_size;i++)
	{
		cout <<arr[i] <<endl;
	}
}

int main()
{
	int arr[] = {11,4,56,44,67,3};

	int ele_size;
	ele_size = sizeof(arr)/sizeof(arr[0]);
	bubble_sort(arr,ele_size);

}
