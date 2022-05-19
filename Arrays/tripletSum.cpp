#include <iostream>
using namespace std;
int pairSum(int arr[], int n, int s)
{
    int i = 0, j = 0, k = 0;
    for (i = 0; i < n; i++) // traversing from i to n
    {
        for (j = i + 1; j < n; j++) // traversing from i+1 to n
        {
            for(k = j+1; k < n; k++){ // traverse from j+1 to n

                if ((arr[i] + arr[j] + arr[k]) == s)
                {
                    cout << arr[i]<< ", "<< arr[j]<< ", "<< arr[k]<< endl;
                }
            }
        }
    }
    return 0;
}
int main()
{

    // input
    int n, s;
    cin >> n;
    int arr[n];
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    cin >> s;
    // calling fn
    pairSum(arr, n, s);
    return 0;
}