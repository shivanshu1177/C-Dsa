#include <iostream>
using namespace std;
int pairSum(int arr[], int n, int s){
    int i = 0, j = 0;
    for (int i = 0; i < n; i++)    // traversing from i to n
    {
        for (int j = i+1; j < n; j++) // traversing from i+1 to n
        {
            if ((arr[i]+arr[j]) == s)
            {
                cout<< min(arr[i], arr[j]) << ", "<< max(arr[i], arr[j])<< endl;
            }
            
        }
        
    }
    return 0;
    
}
int main(){

    //input
    int n, s;
    cin>> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin>> arr[i];
    }
    cin >> s;
    // calling fn
    pairSum(arr, n, s);
    return 0;
}