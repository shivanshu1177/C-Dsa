#include<iostream>
using namespace std;

int fact_recursive(int n){
    if (n == 0)
        return 1;
    return n * fact_recursive(n - 1);
}

int main(){
    int n;
    cin >> n ;
    cout << fact_recursive(n);


}