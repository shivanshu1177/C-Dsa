#include <iostream>
using namespace std;
// reverse fn
int revs(int arr[], int n){
    int s = 0;
    int e = n-1;
    while(s<=e){
        swap(arr[s], arr[e]);
        s++;
        e--;
    }
    return 0;

}
// output fn
int give(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        cout << arr[i] << " ";
    }
    cout << endl;
    return 0;
}
int main()
{
    /* code */
    int n;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        cin >> arr[i];
    }

    revs(arr, n); 
    give(arr, n);
    return 0;
}
