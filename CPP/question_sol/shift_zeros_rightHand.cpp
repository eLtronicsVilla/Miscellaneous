#include <iostream>
#include <string.h>
using namespace std;

int main()
{
	int arr[]={2,0,4,5,0,0,1,0};
	int i,count=0,l;
	l=sizeof(arr)/sizeof(arr[0]);
	for (i=0;i<l;i++)
		if (arr[i]!=0)
			arr[count++]=arr[i];

	while(count<l)
		arr[count++]=0;

	for(i=0;i<l;i++)
		cout<<arr[i]<<" ";
	return 0;
}
