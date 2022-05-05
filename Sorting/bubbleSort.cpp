#include <iostream>
using namespace std;

int main(){
    int n;
    cin>>n;
    //input
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }
    //bubble sort
    int counter = 1;
    while (counter< n-1)
    {
        for(int i = 0; i< n - counter; i++){
            if(arr[i]> arr[i+1]){
                int temp = arr[i];
                arr[i] = arr[i+1];
                arr[i+1] = temp;

            }
        }
        counter++;
    }
    //output
    for(int i = 0; i<n; i++){
        cout<< arr[i]<<" ";
    }cout<< endl;
    
}