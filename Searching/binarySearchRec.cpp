#include <iostream>
using namespace std;


int solve(int *arr, int s, int e, int k)
{
    // base case
    if (s > e)
        return -1;
    int mid = s + (e - s) /2;
    if (arr[mid] == k)
        return mid;


    if (arr[mid] < k)
    {
        return solve(arr, mid + 1, e, k);
        
    }
    else
    {
        return solve(arr, s, mid -
         1, k);
        
    }
}

int binarySearch(int *inp, int n, int val)
{
    // Write your code here
    int ans =  solve(inp, 0, n - 1, val);
    return ans;
}
int main(){
    int n, key;
    cin>> n;
    int a[n];
    for(int i = 0; i<n; i++){
        cin>>a[i];
    }
    cin>>key;
    cout<< binarySearch(a, n, key);



}