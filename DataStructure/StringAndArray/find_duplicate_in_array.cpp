// find duplicate in array O(n) time and O(1) extra space

// Given an array of n element that contains element in range from 0 to n-1, with any of these numbers appearing any number of times.
// Find these repeating number in O(n) and using only constant memory space.
// output in sorted order.

#include <bits/stdc++.h>
using namespace std;
 
int main()
{
 
    int numRay[] = { 0, 4, 3, 2, 7, 8, 2, 3, 1 };
    int arr_size = sizeof(numRay) / sizeof(numRay[0]);
   
   
    // count the frequency
    for (int i = 0; i < arr_size; i++) {
        numRay[numRay[i] % arr_size]
            = numRay[numRay[i] % arr_size] + arr_size;
    }
    cout << "The repeating elements are : " << endl;
    for (int i = 0; i < arr_size; i++) {
        if (numRay[i] >= arr_size * 2) {
            cout << i << " " << endl;
        }
    }
    return 0;
}
