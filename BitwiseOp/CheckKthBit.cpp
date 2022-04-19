#include <iostream>
using namespace std;

void checkKth(int n, int k){
    if (n & (1 << (k-1)) != 0) //using left shift operators
    // use if((n >> (k-1)) & 1 = 1)  gor right shift operators
    {
        cout << "YES";
    }else
    {
        cout << "No";
    }
    
    
}

int main(){
    int n, k;
    cin >> n >> k ;

    checkKth(n, k);
}