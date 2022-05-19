#include <iostream>
using namespace std;
int intersection(int arr1[], int n, int arr2[], int m){
    int i = 0, j =0, ans =0;
    while(i<n && j <m){
        if(arr1[i] == arr2[j]){
            ans = arr1[i];
            cout << ans << " ";
            i++;
            j++;
        }
        else if(arr1[i]<arr2[j]){
            i++;

        }
        else{
            j++;
        }
        
    }
    return 0;
}
int main(){
    int n;
    cin >> n;
    int arr1[n];
    for(int i = 0; i<n; i++){
        cin >> arr1[i];
    }
    int m;
    cin >> m;
    int arr2[m];
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }

    intersection(arr1, n, arr2, m);
    return 0;
}