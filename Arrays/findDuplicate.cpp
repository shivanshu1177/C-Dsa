#include <iostream>
using namespace std;
int findDuplicate(int arr[], int n){
    int ans = 0;
    for(int i = 0; i<n; i++){
        ans = ans^arr[i];

    }
    for(int i = 1; i<n; i++){
        ans = ans ^ i;
    }
    return ans;
}
int main(){
    int n;
    cin>> n;
    int arr[n];
    for(int i = 0; i<n; i++){
        cin>> arr[i];
    }

    cout<< findDuplicate(arr, n);  //arr[n] has elements 1 to n-1 once and a no twice we have to find that no.
}