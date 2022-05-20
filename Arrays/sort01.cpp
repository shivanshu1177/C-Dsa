#include <iostream>
using namespace std;

int printArray(int arr[], int n){
    for (int i = 0; i < n; i++)
    {
        /* code */
        cout << arr[i]<< " ";
    }
    cout<< endl;
}

int anFn(int arr[], int n){
    int i = 0, j = n-1;
    while(i<j){
        while (arr[i] == 0)
        {
            i++;
        }
        while (arr[j] == 1){
            j--;
        }

        swap(arr[i], arr[j]);
        i++;
        j--;
    }
    return 0;
}
int main(){
    int n;
    cout<<"N:";
    cin >> n;
    int arr[n];
    cout << "0 AND 1 input only"<< endl;
    for (int i = 0; i < n; i++)
    {
        /* code */
        cin >> arr[i];
    }
    anFn(arr, n);
    
    printArray(arr, n);
    

}