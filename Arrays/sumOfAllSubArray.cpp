#include <iostream>
using namespace std;

int main(){
    int crr = 0;
    int n;
    cin>> n;

    int a[n];
    for(int i = 0; i<n; i++){
        cin>> a[i];
    }
    for(int i = 0; i<n; i++){
        crr = 0;
        for(int j = i; j<n; j++){
            crr += a[j];
            cout << crr << endl;
        }

    }
    return 0;
}