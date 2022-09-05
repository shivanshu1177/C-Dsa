#include <iostream>
using namespace std;
int firstOcc(int arr[], int n, int s, int e, int k){
    while(s<=e){
        int mid = s + (e-s)/2 ;
        //base case
        if((mid == 0 || k > arr[mid-1]) && arr[mid] == k){
            return mid;
        }

        else if(k > arr[mid]){
            return firstOcc(arr, n, (mid+1), e, k);
        }
        else{
            return firstOcc(arr, n , s, (mid-1), k);
        }

    }
    return -1;
}

int lastOcc(int arr[], int n, int s, int e, int k)
{
    while (s <= e)
    {
        int mid = s + (e - s) / 2;
        // base case
        if ((mid == n-1 || k < arr[mid + 1]) && arr[mid] == k)
        {
            return mid;
        }

        else if (k < arr[mid])
        {
            return lastOcc(arr, n, s, (mid - 1), k);
        }
        else
        {
            return lastOcc(arr, n, (mid + 1), e, k);
        }
    }
    return -1;
}

int main(){
    int n, key;
    cout << "ENTER Size of Array: ";
    cin >> n;

    int arr[n];
    cout << "Enter Array: ";
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    cout << "Enter the num: ";
    cin >> key;
    int s = 0, e = n - 1;

    int totalOcc = (lastOcc(arr, n, s, e, key) - firstOcc(arr, n, s , e, key)) + 1 ;
    cout<<"Total occurences of "<< key << " in Arr is "<< totalOcc << " times";
}