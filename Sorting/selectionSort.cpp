#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;

    int arr[n];
    //input(array)
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    //selective sort 
    for(int i = 0; i<n-1; i++){
        int minIndex = i;
        for(int j = i+1; j<n; j++){
            if(arr[j] < arr[minIndex]){
                minIndex = j;
            }
        }
        swap(arr[minIndex], arr[i]);
    }
    //print sorted array
    for(int i = 0; i<n; i++){
        cout<< arr[i]<<" ";
    }cout<<endl;

}