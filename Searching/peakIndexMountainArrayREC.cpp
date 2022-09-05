// find index of peak element in an mountain array
#include <iostream>
using namespace std;

int peakIndex(int arr[], int n, int s, int e){
    if(s<n){

        int mid = s + (e-s)/2;
        //base case
        if(arr[mid-1] < arr[mid] && arr[mid] > arr[mid+1]){
            return mid;
        }
        else if(arr[mid] < arr[mid+1]){
            return peakIndex(arr, n, (mid+1), e);
        }
        else{
            return peakIndex(arr, n, s, mid);
        }

    }
    return -1;
}

int main(){
    int n;
    cout << "Enter Size: ";
    cin >> n;
    int arr[n];
    cout<<"Enter Mountain Array: ";
    for(int i = 0 ; i<n; i++){
        cin >> arr[i];
    }
    int s = 0, e = n-1;
    cout << "Peak Index is "<<peakIndex(arr, n, s, e);
}