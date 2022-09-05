// first and last position of an element in a sorted array

#include <iostream>
using namespace std;

//find first occ using binary search
int firstOcc(int arr[], int k, int s, int e, int n)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;

        // check for index is zero(first element) or key is greater than element at mid -1 and element at mid is eaual to key
        if ((mid == 0 || k > arr[mid - 1]) && arr[mid] == k) 
        {
            return mid;
        }

        else if (k > arr[mid])
        {
            return firstOcc(arr, k, (mid + 1), e, n);
        }
        else
        {
            return firstOcc(arr, k, s, (mid - 1), n);
        }
    }
    return -1;
}
// find last occ using binary search

int lastOcc(int arr[], int k, int s, int e, int n)
{
    while (s <= e) 
    {
        int mid = s + (e - s) / 2;
        if ((mid == n - 1 || k < arr[mid + 1]) && arr[mid] == k)
        {
            return mid;
        }

        else if ( k < arr[mid])
        {
            return lastOcc(arr, k, s, mid - 1, n);
        }
        else
        {
            return lastOcc(arr, k, mid + 1, e, n);
        }
    }
    return -1;
}
int main()
{
    int n, key;
    cout<< "ENTER Size of Array: ";
    cin>> n;

    int arr[n];
    cout<<"Enter Array: ";
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    
    cout << "Enter the num: ";
    cin >> key;
    int s = 0, e = n - 1;
   
    cout << "first occ at: " << firstOcc(arr, key, s, e, n) << " index" << endl;
    cout << "last occ at: " << lastOcc(arr, key, s, e, n) << " index" << endl;


    return 0;
}