#include <iostream>
using namespace std;
int sal(int arr[], int n){
    
    for(int i =0; i<n; i+=2){
        if(i+1 < n){
            swap(arr[i], arr[i+1]);
            
        }
    }
    return 0;
}
int give(int arr[], int n)
{
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
int main(){
    int n;
    cin >> n;
    int arr[n];
    
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }
    sal(arr, n);
    give(arr, n);
    return 0;
}