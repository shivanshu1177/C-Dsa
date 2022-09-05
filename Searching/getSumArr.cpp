#include <iostream>
using namespace std;

int getSum(int *arr, int size){
    //base case
    if(size==0)
        return 0;

    if(size==1)
        return arr[0];
    //recursive relation
    int sum = arr[0] + getSum(arr+1, size-1);
    return sum;
}

int main(){
    int size;
    cout<<"Enter size: ";
    cin >> size;

    int arr[size];
    cout<<"Enter array: ";
    for(int i =0; i<size; i++){
        cin>> arr[i];
    }

    cout<< getSum(arr, size);
    return 0;
}