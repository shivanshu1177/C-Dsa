#include<bits/stdc++.h>
using namespace std;

void mergeArrays(int arr1[], int n, int arr2[], int m, int arr3[]){
    int i =0, j = 0, k=0;
    while(i<n){
        arr3[k++] = arr1[i++];
    }
    while(j<m){
        arr3[k++] = arr2[j++];
    }

    sort(arr3, arr3+n+m);
}
int main(){
    int n,m;
    int arr1[n];
    cout<<"N: ";
    cin>>n;
    for(int i=0; i<n; i++){
        cin>> arr1[i];
    }
    int arr2[m];
    cout<<"M: ";
    cin>>m;
    for (int j = 0; j < m; j++)
    {
        cin >> arr2[j];
    }
    int arr3[n+m];
    mergeArrays(arr1, n, arr2, m, arr3);

    for(int i=0; i< n+m; i++){
        cout<<arr3[i]<<" ";
    }

    return 0;
}