// This is the merge sort technique

#include <iostream>
using namespace std;
void merge(int a[],int lb,int mid,int ub);

void merge_sort(int arr[],int lb,int ub)
{
	if(lb<ub)

	{
		int mid = lb+(ub-lb)/2;

		merge_sort(arr,lb,mid);

		merge_sort(arr,mid+1,ub);
		merge(arr,lb,mid,ub);

		
	}	
}

void merge(int a[],int lb,int mid,int ub)
{
	int i, j,k;
	i = lb;
	j = mid+1;
	k = lb;

	int b[ub] ; 

	while(i<=mid && j<=ub)
	{
		if (a[i] <= a[j])
		{
			b[k] = a[i];
			i++;
		}
		else
		{
			b[k] = a[j];
			j++;
		}
		k++;
	}
	if(i>mid)
	{
		while(j<=ub)
		{
			b[k] = a[j];
			j++;
			k++;
		}
	}
	else
	{
		while(i<=mid)
		{
			b[k] = a[i];
			i++;
			k++;
		}
	}

	for(int i=lb;i<=ub;i++)
	{
		a[i] = b[i];
	}
	
	
}


int main()
{
	int arr [] = { 4, 3,7,23,5,67,1,90,9};
	int ele = sizeof(arr)/sizeof(arr[0]);
	merge_sort(arr,0,ele-1);
	for(int i=0;i<ele;i++)
	{
		cout << arr[i]<<",";
	}
	

}